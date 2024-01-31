@class NSString, UIColor;

@interface _UILegibilitySettings : NSObject <NSSecureCoding, NSCopying, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *shadowCompositingFilterName;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double imageOutset;
@property (nonatomic) double minFillHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForStyle:(long long)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)dealloc;
- (id)initWithStyle:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContentColor:(id)a0;
- (id)initWithContentColor:(id)a0 contrast:(double)a1;
- (id)initWithStyle:(long long)a0 contentColor:(id)a1;
- (id)initWithStyle:(long long)a0 primaryColor:(id)a1 secondaryColor:(id)a2 shadowColor:(id)a3;
- (void)setPropertiesForStyle:(long long)a0;

@end
