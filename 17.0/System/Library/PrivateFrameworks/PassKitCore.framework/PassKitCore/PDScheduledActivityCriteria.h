@class NSString, NSDate;

@interface PDScheduledActivityCriteria : NSObject <NSSecureCoding, NSCopying> {
    NSString *_priorityKey;
    long long _gracePeriod;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL requireMainsPower;
@property (nonatomic) BOOL requireScreenSleep;
@property (nonatomic) BOOL requireNetworkConnectivity;
@property (nonatomic, getter=isRepeating) BOOL repeating;
@property (nonatomic) double repeatInterval;
@property (copy, nonatomic) NSString *reason;

+ (id)priorityActivityCriteriaWithStartDate:(id)a0;
+ (id)maintenanceActivityCriteriaWithStartDate:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)xpcActivityCriteria;
- (id)initWithPriorityKey:(id)a0 gracePeriod:(long long)a1 startDate:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqualToScheduledAcivityCriteria:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
