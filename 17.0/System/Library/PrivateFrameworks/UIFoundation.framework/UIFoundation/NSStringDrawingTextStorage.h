@class NSString, CUIStyleEffectConfiguration, CUICatalog, NSTextContainer, NSConcreteNotifyingMutableAttributedString, NSLayoutManager;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {
    NSConcreteNotifyingMutableAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    double _baselineDelta;
    struct { unsigned char _typesetterBehavior : 4; unsigned char _needToFlushCache : 1; unsigned char _baselineMode : 1; unsigned char _forceWordWrapping : 1; unsigned char _usesSimpleTextEffects : 1; unsigned char _applicationFrameworkContext : 3; unsigned char _wrappedByCluster : 1; unsigned int _reserved : 20; } _sdflags;
}

@property (retain, nonatomic) CUICatalog *cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;
@property double defaultTighteningFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)stringDrawingTextStorage;
+ (BOOL)_hasCustomSettings;
+ (void)performLayoutOperation:(id /* block */)a0;
+ (void)_setHasCustomSettings:(BOOL)a0;

- (id)layoutManager;
- (id)init;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)_setForceWordWrapping:(BOOL)a0;
- (void)dealloc;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (long long)typesetterBehavior;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (unsigned long long)length;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)_isStringDrawingTextStorage;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)processEditing;
- (BOOL)_baselineMode;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)textContainer;
- (BOOL)_shouldSetOriginalFontAttribute;
- (id)string;
- (BOOL)_forceWordWrapping;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (double)_baselineDelta;
- (BOOL)_wrappedByCluster;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })usedRectForTextContainer:(id)a0;
- (void)_setWrappedByCluster:(BOOL)a0;
- (void)_setBaselineDelta:(double)a0;
- (long long)_applicationFrameworkContext;
- (void)_setApplicationFrameworkContext:(long long)a0;
- (void)_setBaselineMode:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })defaultTextContainerOriginForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTextContainer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 graphicsContext:(struct CGContext { } *)a3 baselineMode:(BOOL)a4 scrollable:(BOOL)a5 padding:(double)a6;
- (void)drawTextContainer:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 graphicsContext:(struct CGContext { } *)a2 baselineMode:(BOOL)a3 scrollable:(BOOL)a4 padding:(double)a5;
- (void)fontSetChanged;
- (void)setGraphicsContext:(id)a0;
- (id)textContainerForAttributedString:(id)a0;
- (id)textContainerForAttributedString:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 lineFragmentPadding:(double)a2;

@end
