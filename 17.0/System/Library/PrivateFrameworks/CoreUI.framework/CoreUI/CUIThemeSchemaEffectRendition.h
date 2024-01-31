@class NSDictionary, CUIShapeEffectPreset, CUIImage;

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition {
    NSDictionary *_cuiInfo;
    CUIShapeEffectPreset *_effectPreset;
    CUIImage *_referenceImage;
}

- (void)dealloc;
- (BOOL)_generateReferenceImage;
- (void)_initializeCoreUIOptions:(id)a0;
- (id)_rendererInitializationDictionary;
- (id)coreUIOptions;
- (id)effectPreset;
- (id)initWithCoreUIOptions:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (id)referenceImage;

@end
