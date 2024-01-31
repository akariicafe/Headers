@class FigAlternateObjCVideoLayoutAttributes;

@interface AVAssetVariantVideoLayoutAttributes : NSObject {
    FigAlternateObjCVideoLayoutAttributes *_figVideoLayoutAttributes;
}

@property (readonly, nonatomic) unsigned long long packingType;
@property (readonly, nonatomic) unsigned long long projectionType;
@property (readonly, nonatomic) unsigned long long stereoViewComponents;

- (void)dealloc;
- (id)description;
- (id)initWithFigVideoImmersiveAttributes:(id)a0;

@end
