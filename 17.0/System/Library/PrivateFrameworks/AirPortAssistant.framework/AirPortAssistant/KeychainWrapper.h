@class NSString, NSLock;

@interface KeychainWrapper : NSObject

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSLock *lock;

+ (id)keychainPasswordForMACAddress:(id)a0;
+ (id)keychainWrapperWithMACAddress:(id)a0;
+ (void)removeKeychainPasswordForMACAddress:(id)a0;

- (void)dealloc;
- (id)genericPasswordQuery;
- (id)genericPassword;
- (int)addGenericPassword:(id)a0 withLabel:(id)a1 andDescription:(id)a2;
- (id)getGenericPassword;
- (id)getPasswordFromQuery:(id)a0;
- (id)initWithAccountName:(id)a0 serviceName:(id)a1;
- (void)removeGenericPassword;

@end
