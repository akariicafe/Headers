@class NSString, NSData, POKeychainHelper;

@interface POKeychainJWKSStorageProvider : NSObject <POJWKSStorageProvider>

@property (retain) POKeychainHelper *keychainHelper;
@property (copy, nonatomic) NSString *extensionIdentifier;
@property (nonatomic) BOOL isSystem;
@property (copy) NSData *jwksCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithExtensionIdentifier:(id)a0;
- (id)initWithExtensionIdentifier:(id)a0 system:(BOOL)a1;
- (id)jwksCache;
- (id)jwksCacheForExtensionIdentifier:(id)a0;
- (void)setJwksCache:(id)a0;
- (void)setJwksCache:(id)a0 forExtensionIdentifier:(id)a1;

@end
