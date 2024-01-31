@interface SCLSettingsSyncErrorBehavior : NSObject

@property (readonly, nonatomic) unsigned long long recoveryType;
@property (readonly, nonatomic) long long retryInterval;

- (id)initWithRecoveryType:(unsigned long long)a0 retryInterval:(long long)a1;

@end
