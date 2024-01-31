@class NSString;

@interface DAEHolidayCalendarFetchResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *calendarDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
