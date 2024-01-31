@class NSString, UIColor;

@interface CUIKCalendarSpecialDayData : NSObject

@property (nonatomic) long long dayType;
@property (retain, nonatomic) struct CGColor { } *cgColor;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) UIColor *color;

- (id)init;
- (void).cxx_destruct;

@end
