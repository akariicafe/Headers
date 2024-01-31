@class NSString, NSNumber;

@interface WFEKCalendarDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL allCalendars;
@property (readonly, copy, nonatomic) NSString *calendarTitle;
@property (readonly, copy, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic) NSNumber *calendarRGBAValue;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAllCalendars;
- (id)initWithCalendarTitle:(id)a0 identifier:(id)a1 RGBAValue:(id)a2;
- (id)matchingCalendarsFromArray:(id)a0;
- (id)matchingRemindersListsFromArray:(id)a0;

@end
