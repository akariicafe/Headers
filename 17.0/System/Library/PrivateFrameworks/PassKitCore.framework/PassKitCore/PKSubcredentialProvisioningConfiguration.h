@interface PKSubcredentialProvisioningConfiguration : NSObject

@property (readonly, nonatomic) long long configurationType;

- (id)initWithConfigurationType:(long long)a0;
- (id)transitionTable;
- (id)acceptInvitationConfiguration;
- (id)localDeviceConfiguration;
- (id)ownerConfiguration;
- (id)remoteDeviceConfiguration;
- (id)remoteDeviceInvitation;
- (long long)startingState;

@end
