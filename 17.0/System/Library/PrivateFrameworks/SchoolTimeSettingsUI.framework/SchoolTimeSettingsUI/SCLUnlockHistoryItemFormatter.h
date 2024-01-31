@class UIColor, NSDateFormatter, NSLocale, NSDateComponentsFormatter;

@interface SCLUnlockHistoryItemFormatter : NSFormatter

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateComponentsFormatter *componentsFormatter;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) NSLocale *locale;

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (id)fontDescriptor;
- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (id)durationStringForHistoryItem:(id)a0;
- (id)localizedStringWithTimeString:(id)a0 durationString:(id)a1;
- (id)timeStringForHistoryItem:(id)a0;

@end
