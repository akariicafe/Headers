@class NSTimeZone, MFDatePickerItemIdentifier, NSString, NSDate;

@interface MFDatePickerItem : NSObject

@property (readonly, nonatomic) MFDatePickerItemIdentifier *identifier;
@property (retain, nonatomic) NSDate *selectedDate;
@property (retain, nonatomic) NSDate *selectedTime;
@property (retain, nonatomic) NSTimeZone *selectedTimeZone;
@property (retain, nonatomic) NSString *selectedCityName;
@property (nonatomic) long long datePickerComponentType;
@property (nonatomic) BOOL timeSwitchEnabled;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 selectedDate:(id)a1 selectedTime:(id)a2 selectedTimeZone:(id)a3 selectedCityName:(id)a4 datePickerComponentType:(long long)a5;
- (id)initWithIdentifier:(id)a0 selectedDate:(id)a1 selectedTime:(id)a2 selectedTimeZone:(id)a3 selectedCityName:(id)a4 datePickerComponentType:(long long)a5 timeSwitchEnabled:(BOOL)a6;

@end
