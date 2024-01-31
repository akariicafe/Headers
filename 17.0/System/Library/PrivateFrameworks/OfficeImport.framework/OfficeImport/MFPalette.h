@class NSMutableArray;

@interface MFPalette : NSObject <MFObject> {
    NSMutableArray *m_colours;
}

+ (id)paletteWithColours:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)resize:(int)a0;
- (id)getColour:(int)a0;
- (id)initWithColours:(id)a0;
- (int)selectInto:(id)a0;
- (BOOL)setEntries:(int)a0 in_colours:(id)a1;

@end
