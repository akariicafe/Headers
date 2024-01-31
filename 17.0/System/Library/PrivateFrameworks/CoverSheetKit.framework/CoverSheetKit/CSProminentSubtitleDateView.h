@class NSString, NSDateFormatter, NSLocale;

@interface CSProminentSubtitleDateView : CSProminentTextElementView

@property (retain, nonatomic) NSDateFormatter *formatter;
@property (retain, nonatomic) NSDateFormatter *alternateDateFormatter;
@property (copy, nonatomic) NSString *alternateCalendarIdentifier;
@property (retain, nonatomic) NSLocale *alternateCalendarLocale;

+ (unsigned long long)elementType;

- (id)initWithDate:(id)a0 font:(id)a1 textColor:(id)a2;
- (void)_updateLabel;
- (id)overrideString;
- (id)initWithDate:(id)a0 textColor:(id)a1;
- (void)setDate:(id)a0;
- (void)setAlternateCalendarIdentifier:(id)a0 locale:(id)a1;
- (void).cxx_destruct;
- (BOOL)_wantsCompactForOrientation;
- (id)_alternateDateString;
- (id)_dateString;

@end
