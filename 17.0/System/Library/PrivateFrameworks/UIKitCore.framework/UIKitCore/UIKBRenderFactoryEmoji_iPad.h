@interface UIKBRenderFactoryEmoji_iPad : UIKBRenderFactoryEmoji_iPhone

- (long long)assetIdiom;
- (id)lightKeycapsFontName;
- (double)symbolImageControlKeyFontSize;
- (double)keyCornerRadius;
- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })emojiInternationalKeyOffset;
- (double)emojiInternationalKeySize;
- (struct CGPoint { double x0; double x1; })emojiPopupTextOffset;
- (id)messagesWriteboardKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)a0;
- (id)thinKeycapsFontName;

@end
