@class NSDateComponents, NSDateInterval;

@interface USDeviceActivitySchedule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDateComponents *intervalStart;
@property (readonly, copy) NSDateComponents *intervalEnd;
@property (readonly) BOOL repeats;
@property (readonly, copy) NSDateComponents *warningTime;
@property (readonly, copy) NSDateInterval *nextInterval;

+ (id)nextIntervalForStartComponents:(id)a0 endComponents:(id)a1;
+ (id)nextWarningDateForComponents:(id)a0 referenceDate:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntervalStart:(id)a0 intervalEnd:(id)a1 repeats:(BOOL)a2 warningTime:(id)a3;

@end
