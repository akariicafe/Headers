@class EDStyle;

@interface EMCellStyle : CMStyle <NSCopying> {
    EDStyle *_edStyle;
    int _edCellType;
    double _columnWidth;
    double _contentWidth;
    BOOL _truncateContents;
    BOOL _resolvedProperties;
}

+ (id)_parseFontName:(id)a0 nameContainsBold:(BOOL *)a1 nameContainsItalic:(BOOL *)a2;
+ (double)contentWidthForColumnWidth:(double)a0;
+ (id)styleForFont:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEDStyle:(id)a0 type:(int)a1 columnWidth:(unsigned long long)a2 contentWidth:(unsigned long long)a3 truncateContents:(BOOL)a4;
- (void)addAlignmentStyle:(id)a0;
- (void)addBordersStyle:(id)a0;
- (void)addFillStyle:(id)a0;
- (void)addFontStyle:(id)a0;
- (id)cacheFriendlyCSSStyleString;
- (id)cssStyleString;
- (void)resolveContentWidth;
- (void)resolveFormatType;

@end
