@class _UIImageCIImageRenderer, UIImageSymbolConfiguration;

@interface _UIImageViewUncommonProperties : NSObject

@property (retain, nonatomic) UIImageSymbolConfiguration *overridingSymbolConfiguration;
@property (nonatomic) long long defaultRenderingMode;
@property (nonatomic) unsigned long long templateImageRenderingEffects;
@property (retain, nonatomic) _UIImageCIImageRenderer *CIRenderer;
@property (nonatomic) unsigned int drawMode;

- (void).cxx_destruct;

@end
