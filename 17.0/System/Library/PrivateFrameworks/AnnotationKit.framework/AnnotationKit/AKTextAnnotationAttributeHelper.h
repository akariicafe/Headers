@interface AKTextAnnotationAttributeHelper : NSObject

+ (id)actualOrPlaceholderTextOfAnnotation:(id)a0;
+ (void)adjustAnnotationBoundsToFitText:(id)a0;
+ (void)enumerateFontAttributesOfAttributedString:(id)a0 usingBlock:(id /* block */)a1;
+ (id)newTextStorageOriginalFontSavvyWithString:(id)a0 attributes:(id)a1;
+ (void)setTextAttributes:(id)a0 ofAnnotation:(id)a1;
+ (void)adjustBoundsOfAnnotation:(id)a0 toFitOptionalText:(id)a1 onPageController:(id)a2;
+ (id)font:(id)a0 byApplyingScaleFactor:(double)a1;
+ (id)fontsOfAnnotations:(id)a0;
+ (id)fontsOfEditor:(id)a0;
+ (id)newTextStorage:(id)a0 byApplyingScaleFactor:(double)a1;
+ (id)newTextStorageOriginalFontSavvyWithAttributedString:(id)a0;
+ (id)placeholderTextOfAnnotation:(id)a0;
+ (void)resolvedAlignmentAndDirection:(id)a0 locale:(id)a1 alignment:(long long *)a2 direction:(long long *)a3;
+ (void)setFont:(id)a0 ofAnnotation:(id)a1;
+ (void)setTextAlignment:(long long)a0 ofAnnotation:(id)a1;
+ (id)textAttributesOfAnnotations:(id)a0;
+ (id)textAttributesOfEditor:(id)a0;
+ (id)typingAttributes:(id)a0 byApplyingScaleFactor:(double)a1;

@end
