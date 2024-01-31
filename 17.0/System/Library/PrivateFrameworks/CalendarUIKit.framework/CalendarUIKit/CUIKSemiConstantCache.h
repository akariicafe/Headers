@class UIFont;

@interface CUIKSemiConstantCache : NSObject {
    double _dayOccurrenceMinimumCachedLineHeightCompact;
    double _dayOccurrenceMinimumCachedLineHeightRegular;
    double _dayOccurrenceMinimumCachedLineHeightSmallCompact;
    double _dayOccurrenceMinimumCachedLineHeightSmallRegular;
    UIFont *_dayOccurrenceUncompressedSecondaryTextFont;
}

@property (readonly) double dayOccurrenceMinimumCachedLineHeightCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightRegular;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallRegular;
@property (readonly) UIFont *dayOccurrenceUncompressedSecondaryTextFont;

+ (id)sharedInstance;

- (id)init;
- (void)_contentCategorySizeChanged:(id)a0;
- (void).cxx_destruct;
- (void)updateMetrics;
- (id)birthdayImageForFont:(id)a0;
- (id)commentIconStringForFont:(id)a0;
- (id)symbolImage:(id)a0 forFont:(id)a1;
- (id)_dayOccurrenceFontWithStyle:(id)a0 size:(double)a1 regularSize:(double)a2;

@end
