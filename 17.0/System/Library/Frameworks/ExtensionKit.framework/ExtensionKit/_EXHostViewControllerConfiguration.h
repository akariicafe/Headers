@class _EXExtensionInstanceIdentifier, NSString, _EXExtensionIdentity;
@protocol _EXExtensionRepresenting;

@interface _EXHostViewControllerConfiguration : _EXHostViewControllerSessionConfiguration <NSCopying>

@property (nonatomic) long long sizeBridgingOptions;
@property (retain, nonatomic) _EXExtensionIdentity *extensionIdentity;
@property (retain, nonatomic) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (retain, nonatomic) NSString *role;
@property (nonatomic) BOOL retryOnHostingFailure;
@property (nonatomic) BOOL beginHostingImmediately;
@property (retain, nonatomic) id<_EXExtensionRepresenting> extension;

- (id)init;
- (id)initWithExtension:(id)a0;
- (id)role;
- (void)setRole:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtensionIdentity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExtension:(id)a0 role:(id)a1;

@end
