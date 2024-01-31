@class NSTimeZone, NSDate;

@interface EKOfficeHour : NSObject <NSCopying>

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long weekday;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEnabled:(BOOL)a0 weekday:(long long)a1 startTime:(id)a2 endTime:(id)a3 timeZone:(id)a4;

@end
