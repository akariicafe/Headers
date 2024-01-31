@class UIColor;

@interface MPUBorderConfiguration : NSObject <NSCopying>

@property (nonatomic) double borderAlpha;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double fillAlpha;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double dropShadowAlpha;
@property (retain, nonatomic) UIColor *dropShadowColor;
@property (nonatomic) unsigned long long dropShadowEdges;
@property (nonatomic) double dropShadowWidth;
@property (readonly, nonatomic, getter=isFullyTransparent) BOOL fullyTransparent;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
