@interface CKContextSharedExtractionHelper : NSObject

+ (BOOL)_isRelevantForExtractionWithView:(id)a0;
+ (id)blocksFromText:(id)a0;
+ (id)webPageNodeExtractionJavaScript;
+ (id)bestContentStringForWebViewUIElements:(id)a0 andTitle:(id)a1;
+ (id)bestImageForView:(id)a0;
+ (void)descendantsRelevantForContentExtractionFromView:(id)a0 intoArray:(id)a1;
+ (BOOL)elementIsOnScreenWithView:(id)a0 window:(id)a1;
+ (BOOL)textBlockLooksLikeAListWithText:(id)a0;

@end
