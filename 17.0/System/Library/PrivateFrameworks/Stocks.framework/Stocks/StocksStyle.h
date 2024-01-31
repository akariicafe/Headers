@class UIColor, UIFont;

@interface StocksStyle : NSObject {
    UIColor *_chartHighlightColor;
    UIFont *_mainFont;
    UIFont *_chartLabelFont;
}

+ (id)sharedStyle;

- (id)init;
- (void)resetLocale;
- (void).cxx_destruct;
- (id)fontOfSize:(double)a0;
- (id)boldFontOfSize:(double)a0;
- (id)chartHighlightColor;
- (id)gainColor;
- (id)lightFontOfSize:(double)a0;
- (id)lossColor;
- (id)mediumFontOfSize:(double)a0;

@end
