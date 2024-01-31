@class EDResources;

@interface CHDLegendEntry : NSObject {
    unsigned long long mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}

- (unsigned long long)fontIndex;
- (id)font;
- (id)description;
- (void)setFontIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (unsigned int)entryIndex;
- (void)setEntryIndex:(unsigned int)a0;
- (id)initWithResources:(id)a0;

@end
