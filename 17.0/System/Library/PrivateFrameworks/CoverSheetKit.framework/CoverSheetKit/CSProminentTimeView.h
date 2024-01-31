@class NSString, NSDateFormatter, UIFont;

@interface CSProminentTimeView : CSProminentTextElementView

@property (retain, nonatomic) NSDateFormatter *timeFormatter;
@property (nonatomic) BOOL usesLightTimeFontVariant;
@property (nonatomic) BOOL usesLandscapeTimeFontVariant;
@property (retain, nonatomic) UIFont *baseFont;
@property (copy, nonatomic) NSString *numberingSystem;
@property (nonatomic) BOOL fourDigitTime;

+ (id)_lightVariantForBaseFont:(id)a0 size:(double)a1;
+ (id)_prominentFontFromBaseFont:(id)a0 usingLightVariant:(BOOL)a1 usingLandscapeVariant:(BOOL)a2;
+ (unsigned long long)elementType;

- (id)initWithDate:(id)a0 font:(id)a1 textColor:(id)a2;
- (id)initWithDate:(id)a0 baseFont:(id)a1 textColor:(id)a2;
- (void)dealloc;
- (void)currentLocaleDidChange:(id)a0;
- (id)_localeAccountingForNumberingSystem:(BOOL)a0;
- (void)setDate:(id)a0;
- (void)_updateTimeFormatterNumberingSystem;
- (void)_updateTimeString;
- (id)_timeString;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateTimeFormatter;
- (id)_correctedDateFormat;

@end
