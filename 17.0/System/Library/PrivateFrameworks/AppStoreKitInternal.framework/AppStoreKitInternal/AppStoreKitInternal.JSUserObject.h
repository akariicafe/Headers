@class NSString, NSNumber;

@interface AppStoreKitInternal.JSUserObject : NSObject <_TtP19AppStoreKitInternalP33_5DCB8B06D2403C176A36BAD97712985119JSUserObjectExports_> {
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ onDevicePersonalizationDataManager;
    void /* unknown type, empty encoding */ isFitnessAppInstallationAllowedBox;
    void /* unknown type, empty encoding */ fitnessAppInstallationAllowedConditionLock;
}

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) BOOL isManagedAppleID;
@property (nonatomic, readonly) BOOL isUnderThirteen;
@property (nonatomic, readonly) NSNumber *userAgeIfAvailable;
@property (nonatomic, readonly) BOOL isFitnessAppInstallationAllowed;
@property (nonatomic, readonly) BOOL isOnDevicePersonalizationEnabled;

- (id)init;
- (void)queryFitnessAppInstallationAllowed;
- (void).cxx_destruct;
- (id)onDevicePersonalizationDataContainerForAppIds:(id)a0;

@end
