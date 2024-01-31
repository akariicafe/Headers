@interface SOKerberosExtensionUserData : NSObject

@property (nonatomic) BOOL useKeychain;
@property (nonatomic) BOOL userSetKeychainChoice;
@property (nonatomic) BOOL useSmartCard;

- (id)init;

@end
