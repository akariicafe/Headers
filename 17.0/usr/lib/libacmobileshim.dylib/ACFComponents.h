@protocol ACFCryptographProtocol, ACFKeychainManagerProtocol, ACFCertificateStoragePolicy;

@interface ACFComponents : NSObject

@property (retain, nonatomic) id<ACFCryptographProtocol> cryptograph;
@property (retain, nonatomic) id<ACFKeychainManagerProtocol> keychainManager;
@property (retain, nonatomic) id<ACFCertificateStoragePolicy> certificateStoragePolicy;
@property (retain, nonatomic) Class transportClass;
@property (retain, nonatomic) Class localAuthenticationContextClass;

+ (void)setComponents:(id)a0;
+ (id)components;
+ (id)defaultComponents;

- (void)dealloc;
- (id)createTransport;
- (id)createLocalAuthenticationContext;

@end
