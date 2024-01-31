@class NSString, CAFilter, UIImage, NSURL;

@interface BSUIVibrancyLUT : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double blend;
@property (copy, nonatomic) NSString *toIdentifier;
@property (copy) UIImage *interpolatedLutImage;
@property (readonly, copy, nonatomic) NSString *lutIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, copy, nonatomic) CAFilter *resolvedLUTFilter;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithLuminanceReduced:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 bundleURL:(id)a1;
- (BOOL)canReuseInterpolatedLUTWithBlend:(double)a0 toIdentifier:(id)a1;
- (id)copyWithBlend:(double)a0 toIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 bundleURL:(id)a1 blend:(double)a2 toIdentifier:(id)a3;
- (id)interpolatedImageWithFirstImage:(id)a0 secondImage:(id)a1 blend:(double)a2;
- (BOOL)shouldUseInterpolatedLUTForBlend:(double)a0 toIdentifier:(id)a1;

@end
