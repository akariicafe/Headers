@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection, EDStylesCollection;

@interface EDResources : NSObject {
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}

- (id)fonts;
- (id)styles;
- (id)colors;
- (id)names;
- (void)setColors:(id)a0;
- (id)strings;
- (id)description;
- (id)links;
- (void).cxx_destruct;
- (id)border;
- (id)borders;
- (id)themes;
- (void)setThemes:(id)a0;
- (id)alignmentInfos;
- (id)contentFormats;
- (id)differentialStyles;
- (id)fills;
- (id)initWithStringOptimization:(BOOL)a0;
- (id)tableStyles;

@end
