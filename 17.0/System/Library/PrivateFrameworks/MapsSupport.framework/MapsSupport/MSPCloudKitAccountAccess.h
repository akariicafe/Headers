@class NSString, CKContainer;

@interface MSPCloudKitAccountAccess : NSObject {
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
    CKContainer *_secureContainerWithZoneWidePCS;
}

@property (nonatomic) BOOL useSecureContainer;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) BOOL disableDeviceToDeviceEncryption;

+ (long long)containerEnvironmentForAccessEnvironment:(long long)a0;
+ (id)sharedAccess;
+ (long long)defaultEnvironment;
+ (BOOL)hasCloudKitEntitlement;
+ (BOOL)useLongLivedOperations;
+ (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)a0;

- (void)fetchAccountIdentifierWithCompletion:(id /* block */)a0;
- (id)initWithEnvironment:(long long)a0;
- (id)initWithEnvironment:(long long)a0 createContainers:(BOOL)a1;
- (id)containerWithZoneWidePCS:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)containerForAccount;
- (void)fetchAccountStatus:(id /* block */)a0;
- (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)a0;

@end
