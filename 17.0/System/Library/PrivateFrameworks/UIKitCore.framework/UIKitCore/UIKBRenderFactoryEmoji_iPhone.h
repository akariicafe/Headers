@interface UIKBRenderFactoryEmoji_iPhone : UIKBRenderFactory_Emoji

- (long long)assetIdiom;
- (double)symbolImageControlKeyFontSize;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })emojiInternationalKeyOffset;
- (double)emojiInternationalKeySize;
- (struct CGPoint { double x0; double x1; })emojiPopupTextOffset;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)a0;
- (id)traitsHashStringForKey:(id)a0 withGeometry:(id)a1 withSymbolStyle:(id)a2 controlOpacities:(BOOL)a3 blurBlending:(BOOL)a4;

@end
