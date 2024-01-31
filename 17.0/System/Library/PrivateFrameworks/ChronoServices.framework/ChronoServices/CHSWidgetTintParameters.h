@class BSColor, NSString;

@interface CHSWidgetTintParameters : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) unsigned long long effectiveRenderingMode;
@property (readonly, nonatomic) long long filterStyle;
@property (readonly, nonatomic) long long fallbackFilterStyle;
@property (readonly, nonatomic) BSColor *primaryTintColor;
@property (readonly, nonatomic) BSColor *secondaryTintColor;
@property (readonly, nonatomic) double fraction;
@property (readonly, nonatomic) BOOL accentedAlternateBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)_init;
- (id)initWithFilterStyle:(long long)a0;
- (id)initWithPrimaryTintColor:(id)a0 secondaryTintColor:(id)a1 filterStyle:(long long)a2 fallbackFilterStyle:(long long)a3 fraction:(double)a4;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTintParameters:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
