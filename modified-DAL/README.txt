This folder contains our modified Micro:bit-DAL code.

Demonstrations are in the DEMO directory and include links to YouTube videos.

Edits are surrounded by commented dashs: (//------------------------)

Files edited:
    source/types/MicroBitImage.cpp      lines 40-128, 693-722


Lines 40-128:
    This creates and initialises the I2C communication protocol with the I2C led matrix. Note that this is unique to the HT16K33 LED matrix driver.
    
Lines 692-722:
    Edits to the print function so it also writes the bitmap to the I2C matrix.
    
    
TO DO:
    Make paste function not clear whole display before printing
    Implement changes to animation event (to handle scrolling text)
    Implement rotation function
    
DONE:
    Run I2C display from DAL
    Implement changes to print function (for printing characters)
    Implement changes to paste function (for printing images)
    Implement setPixelValue function
    Implement brightness function
    
   
