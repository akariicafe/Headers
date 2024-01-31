@class NSArray, NSString;

@interface PRPosterDescriptorHomeScreenConfiguration : NSObject <BSXPCSecureCoding, BSDescriptionStreamable, NSSecureCoding, NSMutableCopying, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsModifyingLegibilityBlur;
@property (nonatomic) unsigned long long preferredStyle;
@property (copy, nonatomic) NSArray *preferredSolidColors;
@property (copy, nonatomic) NSArray *preferredGradientColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultHomeScreenConfigurationForProvider:(id)a0 role:(id)a1;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPreferredSolidColors:(id)a0;
- (id)initWithPreferredSolidColors:(id)a0 preferredGradientColors:(id)a1;
- (id)initWithPreferredStyle:(unsigned long long)a0;
- (id)initWithPreferredStyle:(unsigned long long)a0 allowsModifyingLegibilityBlur:(BOOL)a1 preferredSolidColors:(id)a2 preferredGradientColors:(id)a3;

@end
