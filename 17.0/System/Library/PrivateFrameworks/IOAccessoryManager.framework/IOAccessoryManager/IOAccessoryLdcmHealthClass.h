@interface IOAccessoryLdcmHealthClass : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int version;
@property BOOL isHealthy;
@property unsigned long long leakagePassedCount;
@property unsigned long long dryCount;
@property unsigned long long wetCount;
@property unsigned long long overVoltageCount;
@property unsigned long long outOfProfileCount;
@property unsigned long long lastSeenTimestamp;
@property unsigned long long rsvd0;
@property unsigned long long rsvd1;
@property unsigned long long rsvd2;
@property unsigned long long rsvd3;
@property unsigned long long overVoltageTimestamp;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
