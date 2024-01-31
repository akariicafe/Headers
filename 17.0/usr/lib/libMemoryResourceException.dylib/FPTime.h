@class NSDate;

@interface FPTime : NSObject

@property (class, readonly, copy, nonatomic) FPTime *now;

@property (readonly, nonatomic) unsigned long long machAbsoluteTime;
@property (readonly, nonatomic) unsigned long long machContinuousTime;
@property (readonly, nonatomic) unsigned long long machAbsoluteTimeNsec;
@property (readonly, nonatomic) unsigned long long machContinuousTimeNsec;
@property (readonly, nonatomic) double wallTime;
@property (readonly, nonatomic) NSDate *date;

- (id)init;

@end
