@class FigAlternateObjCVideoImmersiveAttributes;

@interface AVAssetVariantVideoImmersiveAttributes : NSObject {
    FigAlternateObjCVideoImmersiveAttributes *_figVideoImmersiveAttributes;
}

@property (readonly, nonatomic) long long packing;
@property (readonly, nonatomic) long long channelLayout;
@property (readonly, nonatomic) long long projection;

- (void)dealloc;
- (id)description;
- (id)initWithFigVideoImmersiveAttributes:(id)a0;

@end
