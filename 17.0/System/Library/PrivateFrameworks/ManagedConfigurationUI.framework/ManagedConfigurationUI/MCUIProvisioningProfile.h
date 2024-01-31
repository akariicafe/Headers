@class NSString;

@interface MCUIProvisioningProfile : NSObject <MCUIProvisioningProfileProtocol>

@property (readonly, nonatomic) NSString *allowedAppIDEntitlement;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) BOOL isAppleInternal;
@property (readonly, nonatomic) BOOL isBeta;
@property (readonly, nonatomic) BOOL isFreePP;
@property (readonly, nonatomic) BOOL isUniversalPP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(void *)a0;
- (void).cxx_destruct;
- (BOOL)allowsAppIDEntitlement:(id)a0;

@end
