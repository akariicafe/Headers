@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {
    NSString *_identifier;
    NSMutableDictionary *_memoryStore;
    NSMutableDictionary *_nameIdentifierStore;
    int _maxNameIdentifier;
    NSMutableDictionary *_apperanceNameIdentifierStore;
    int _maxApperanceNameIdentifier;
    NSMutableDictionary *_renditionInfoStore;
}

- (long long)deploymentPlatform;
- (BOOL)usesCUISystemThemeRenditionKey;
- (id)appearances;
- (id)renditionInfoForIdentifier:(unsigned short)a0;
- (const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)keyFormat;
- (id)initWithIdentifier:(id)a0;
- (void)_addRenditionInfoForImageWithName:(id)a0 andKey:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (void)dealloc;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForName:(id)a0;
- (id)imagesWithName:(id)a0;
- (void)_removeRenditionInfoForImageWithName:(id)a0;
- (struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForAssetWithName:(id)a0 withDescription:(id)a1;
- (void)removeImagesNamed:(id)a0;
- (void)removeImageNamed:(id)a0 withDescription:(id)a1;
- (unsigned short)appearanceIdentifierForName:(id)a0;
- (void)insertCGImage:(struct CGImage { } *)a0 withName:(id)a1 andDescription:(id)a2;
- (id)path;
- (id)themeStore;
- (void)clearRenditionCache;
- (id)nameForAppearanceIdentifier:(unsigned short)a0;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)allImageNames;
- (id)defaultAppearanceName;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (long long)maximumRenditionKeyTokenCount;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 usingKeySignature:(id)a1;
- (id)deploymentPlatformString;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForName:(id)a0 cursorHotSpot:(struct CGPoint { double x0; double x1; } *)a1;

@end
