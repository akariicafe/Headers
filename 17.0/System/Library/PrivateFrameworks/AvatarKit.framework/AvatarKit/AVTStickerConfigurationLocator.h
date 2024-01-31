@interface AVTStickerConfigurationLocator : NSObject

+ (id)availableStickerNamesForAnimojiNamed:(id)a0 inStickerPack:(id)a1;
+ (id)unavailableAnimojiNamesForStickerPack:(id)a0;
+ (BOOL)isStickerPackEmpty:(id)a0;
+ (id)stickersDefinitionsForAnimojiNamed:(id)a0 inStickerPack:(id)a1;

@end
