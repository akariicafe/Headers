@class NSArray, NSNumber;

@interface PVMotionEffectTextComponent : PVMotionEffectComponent <PVEffectTextual> {
    void *_textObjectIDs;
    NSArray *_defaultAttributedStrings;
    NSNumber *_hasEmojiRenderingWorkaround;
    NSNumber *_isTitleCard;
}

+ (id)motionEffectPropertyKeyToPublishedParameterNameMap;

- (void)dealloc;
- (void).cxx_destruct;
- (int)orientation;
- (void *)_textObjectIDs:(const void *)a0;
- (void)beginEditingTextAtIndex:(unsigned int)a0;
- (void)beginTextEditing;
- (id)defaultAttributedString:(unsigned long long)a0;
- (void)disableRenderingTextObjectAtIndex_NoLock:(unsigned int)a0 documentInfo:(const void *)a1;
- (void)effect:(id)a0 updateProperties:(id)a1 allProperties:(id)a2;
- (void)enableRenderingTextObjectAtIndex_NoLock:(unsigned int)a0 documentInfo:(const void *)a1;
- (void)endEditingTextAtIndex:(unsigned int)a0;
- (void)endTextEditing;
- (BOOL)hasEmojiRenderingWorkaround;
- (id)initWithMotionEffect:(id)a0;
- (BOOL)isRightToLeftWithCurrentLocale;
- (BOOL)isTextFlipped;
- (BOOL)isTitleCard;
- (void)motionEffect:(id)a0 didBecomeReady:(const void *)a1 properties:(id)a2;
- (BOOL)motionEffect:(id)a0 propertiesDisableCache:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forcePosterFrame:(BOOL)a3;
- (BOOL)motionEffect:(id)a0 shouldInvalidateCachedRenderForProperty:(id)a1 oldValue:(id)a2 newValue:(id)a3;
- (void)motionEffect:(id)a0 willOpenMedia:(const void *)a1 properties:(id)a2;
- (void)motionEffectDidUnload:(id)a0;
- (id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)a0;
- (void)resetDefaultStrings:(const void *)a0;
- (void)setIsRightToLeft_NoLock:(BOOL)a0 documentInfo:(const void *)a1;
- (void)setupTitleParameters:(id)a0 allProperties:(id)a1 documentInfo:(const void *)a2;
- (void)storeDefaultStrings:(const void *)a0;
- (BOOL)supportsFlippingText;
- (BOOL)supportsOrientation;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })textCornersAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 index:(unsigned long long)a1 forcePosterFrame:(BOOL)a2 includeDropShadow:(BOOL)a3 scale:(struct CGPoint { double x0; double x1; })a4 viewSize:(struct CGSize { double x0; double x1; })a5 viewOrigin:(int)a6;
- (id)textEditingBounds:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)textEditingBoundsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 useParagraphBounds:(BOOL)a2 includeDropShadow:(BOOL)a3 includeMasks:(BOOL)a4;
- (id)textTransformsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeTransformAnimation:(BOOL)a2 viewSize:(struct CGSize { double x0; double x1; })a3 viewOrigin:(int)a4;
- (id)textTransformsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 viewSize:(struct CGSize { double x0; double x1; })a2 viewOrigin:(int)a3;

@end
