@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _shadowFlags;
    NSColor *_shadowColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowBlurRadius;
@property (retain, nonatomic) id shadowColor;

+ (void)initialize;
+ (id)defaultShadowColor;
+ (id)shadow;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithShadow:(id)a0;
- (void)applyToGraphicsContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
