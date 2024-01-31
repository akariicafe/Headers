@class NSURL, NSString, NSData;

@interface NSSecurityScopedURLWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly;
@property (readonly, nonatomic, getter=isBackedByFileProvider) BOOL backedByFileProvider;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSData *_scope;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithProviderIdentifier:(id)a0 domainIdentifier:(id)a1 itemIdentifier:(id)a2;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1 extensionClass:(id)a2;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1 scope:(id)a2;

@end
