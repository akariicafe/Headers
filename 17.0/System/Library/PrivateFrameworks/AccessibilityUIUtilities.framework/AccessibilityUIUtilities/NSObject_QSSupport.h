@interface NSObject_QSSupport : __NSObject_QSSupport_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)_accessibilitySentenceRectsForRange:(id)a0;
- (id)_accessibilityTextRectsForRange:(id)a0 singleTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (BOOL)_accessibilityIsTextInteraction;
- (id)_accessibilityQuickSpeakContent;
- (BOOL)_accessibilityIsTextInput;
- (id)_accessibilityQuickSpeakEnclosingSentence:(id *)a0;
- (id)_accessibilityQuickSpeakTokenizer;
- (id)_accessibilityUITextInput;

@end
