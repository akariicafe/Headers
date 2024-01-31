@class NSString, NSArray;

@interface MCUIAppSigner : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identity;
@property (readonly, nonatomic) NSArray *applications;
@property (readonly, nonatomic) NSArray *provisioningProfiles;
@property (readonly, nonatomic) BOOL isTrusted;
@property (readonly, nonatomic) BOOL hasFreePP;
@property (readonly, nonatomic) BOOL hasUniversalPP;
@property (readonly, nonatomic) long long untrustedAppCount;
@property (readonly, nonatomic) long long almostUntrustedAppCount;

+ (id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(id *)a0;
+ (void)_addProfile:(id)a0 toSignerIdentity:(id)a1 inDictionary:(id)a2;
+ (id)_displayNameFromIdentity:(id)a0 hasFreePP:(BOOL)a1 hasUPP:(BOOL)a2;
+ (id)enterpriseAppSignersWithOutDeveloperAppSigners:(id *)a0;

- (void)setIdentity:(id)a0;
- (void).cxx_destruct;
- (void)_updateUntrustedAppCountsForBundleIDs:(id)a0;
- (id)initWithIdentity:(id)a0 applications:(id)a1 provisioningProfiles:(id)a2 hasUPP:(BOOL)a3 hasFreePP:(BOOL)a4;
- (void)main_removeMCUIReferenceForBundleID:(id)a0;
- (void)refreshApplications;

@end
