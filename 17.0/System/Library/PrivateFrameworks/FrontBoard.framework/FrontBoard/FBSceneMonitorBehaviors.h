@interface FBSceneMonitorBehaviors : NSObject <NSCopying>

@property (nonatomic) BOOL monitorsClientSettings;
@property (nonatomic) BOOL monitorsSettings;
@property (nonatomic) BOOL monitorsPairingStatus;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
