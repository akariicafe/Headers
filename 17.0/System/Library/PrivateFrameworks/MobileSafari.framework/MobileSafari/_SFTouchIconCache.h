@interface _SFTouchIconCache : WBSTouchIconCache

+ (id)defaultBackgroundColor;
+ (id)_generateDefaultFavoritesIcon;
+ (id)_monogramConfiguration;

- (BOOL)canHandleRequest:(id)a0;
- (void)_didLoadTouchIcon:(id)a0 withCacheSettingsEntry:(id)a1;
- (id)_operationWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
