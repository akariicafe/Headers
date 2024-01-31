@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)fontAtIndex:(unsigned long long)a0;
- (id)fonts;
- (void)clear;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)fontWithName:(id)a0;
- (id)createFontWithName:(id)a0;
- (id)fontWithName:(id)a0 create:(BOOL)a1;
- (unsigned long long)indexOfFont:(id)a0;

@end
