@interface FxParameterPoint2d : FxPinParameter {
    struct FxParameterPoint2dPriv { BOOL x0; BOOL x1; } *_point2dPriv;
}

- (id)init;
- (void)dealloc;
- (BOOL)isTranslation;
- (void)setIsTranslation:(BOOL)a0;
- (BOOL)isCanvasRelative;
- (void)setIsCanvasRelative:(BOOL)a0;

@end
