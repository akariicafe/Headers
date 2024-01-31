@class NSURL, NSData, FPItem;

@interface PBSecurityScopedURLWrapper : NSObject <NSSecureCoding> {
    NSData *_scope;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly;
@property (readonly, nonatomic, getter=isBackedByFileProvider) BOOL backedByFileProvider;
@property (readonly, nonatomic) FPItem *fpItem;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1 extensionClass:(id)a2;
- (id)initWithFPItem:(id)a0;
- (id)nsURLWrapper;
- (id)initWithNSURLWrapper:(id)a0;
- (id)initWithURL:(id)a0 issueExtension:(BOOL)a1 readonly:(BOOL)a2 extensionClass:(id)a3;
- (id)initWithURLWithoutIssuingExtension:(id)a0;

@end
