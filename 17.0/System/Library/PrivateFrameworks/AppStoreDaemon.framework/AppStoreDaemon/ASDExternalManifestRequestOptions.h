@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSURL *manifestURL;
@property (nonatomic) BOOL shouldHideUserPrompts;

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
