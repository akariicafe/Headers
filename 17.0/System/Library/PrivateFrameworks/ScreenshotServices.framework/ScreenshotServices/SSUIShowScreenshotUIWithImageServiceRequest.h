@class UIImage, SSUIServiceOptions;

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SSUIServiceOptions *options;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)entitlement;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
