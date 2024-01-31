@class NSNumber;

@interface ICSByDayValue : NSObject <NSSecureCoding> {
    NSNumber *_number;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long weekday;
@property (retain, nonatomic) NSNumber *number;

+ (id)byDayValueFromICSString:(id)a0;
+ (long long)weekdayFromICSString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithWeekday:(long long)a0 number:(id)a1;
- (id)initWithWeekday:(long long)a0;

@end
