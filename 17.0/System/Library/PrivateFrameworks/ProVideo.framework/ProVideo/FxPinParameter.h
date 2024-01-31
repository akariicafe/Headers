@interface FxPinParameter : FxPin {
    id defaultValue;
    Class customUI;
    struct FxPinParameterPriv { } *_paramPriv;
}

- (void)setDefaultValue:(id)a0;
- (id)defaultValue;
- (id)init;
- (void)dealloc;
- (Class)customPinControl;
- (void)setCustomPinControl:(Class)a0;

@end
