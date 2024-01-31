@interface FxParameterColor : FxPinParameter {
    struct FxParameterColorPriv { BOOL x0; } *_colorPriv;
}

- (id)init;
- (void)dealloc;
- (BOOL)hasAlpha;
- (void)setHasAlpha:(BOOL)a0;

@end
