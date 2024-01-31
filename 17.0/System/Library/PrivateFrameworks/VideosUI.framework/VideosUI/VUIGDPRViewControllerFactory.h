@interface VUIGDPRViewControllerFactory : NSObject

+ (id)_features;
+ (id)_appImage;
+ (id)_chinaController;
+ (id)_defaultController;
+ (id)_disclaimerFeature;
+ (id)_libraryOnlyController;
+ (id)_tintedAppleTVPlusImageWithRenderingMode:(long long)a0;
+ (id)_tintedMLSCrestImageImageWithRenderingMode:(long long)a0;
+ (id)_tintedPlayTVImageImageWithRenderingMode:(long long)a0;
+ (id)_tintedSportsCourtImageWithRenderingMode:(long long)a0;
+ (id)_tintedSymbolNamed:(id)a0;
+ (id)_tintedVUIGlyphNamed:(id)a0;
+ (id)_whatsNewController;
+ (id)_whatsNewFeatures;
+ (void)createViewController:(BOOL)a0 completion:(id /* block */)a1;

@end
