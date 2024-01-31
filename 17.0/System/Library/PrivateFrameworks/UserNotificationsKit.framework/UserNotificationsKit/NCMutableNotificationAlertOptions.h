@class NSUUID;

@interface NCMutableNotificationAlertOptions : NCNotificationAlertOptions

@property (nonatomic) unsigned long long suppression;
@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSUUID *activeModeUUID;

- (void)setReason:(unsigned long long)a0;
- (void)setActiveModeUUID:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSuppression:(unsigned long long)a0;

@end
