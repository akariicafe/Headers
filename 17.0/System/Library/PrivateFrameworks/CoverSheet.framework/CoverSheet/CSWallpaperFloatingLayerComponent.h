@interface CSWallpaperFloatingLayerComponent : CSComponent

@property (nonatomic) BOOL shouldRenderInline;
@property (nonatomic) BOOL shouldRenderForPosterSwitcher;
@property (nonatomic) BOOL shouldMatchMove;

- (id)init;
- (id)shouldRenderForPosterSwitcher:(BOOL)a0;
- (id)shouldRenderInline:(BOOL)a0;
- (id)shouldMatchMove:(BOOL)a0;

@end
