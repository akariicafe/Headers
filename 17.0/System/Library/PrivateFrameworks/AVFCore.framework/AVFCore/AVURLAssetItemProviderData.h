@class NSURL, NSDictionary, NSSecurityScopedURLWrapper;

@interface AVURLAssetItemProviderData : NSObject <NSSecureCoding> {
    NSSecurityScopedURLWrapper *_securityScopedURLWrapper;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *securityScopedURL;
@property (readonly, nonatomic) NSDictionary *assetInitializationOptions;

+ (id)itemProviderDataWithURL:(id)a0 assetInitializationOptions:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 assetInitializationOptions:(id)a1;

@end
