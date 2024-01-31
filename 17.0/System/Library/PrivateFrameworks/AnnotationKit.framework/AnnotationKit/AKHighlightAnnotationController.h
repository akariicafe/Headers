@class AKController, AKHighlightAnnotation;

@interface AKHighlightAnnotationController : NSObject

@property (weak) AKController *controller;
@property (retain) AKHighlightAnnotation *continuousHighlight;

- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (BOOL)_adaptExistingHighlightsToNewHighlight:(id)a0 onPageController:(id)a1 firstModifiedHighlight:(id *)a2;
- (BOOL)_clearHighlightsWithStyleMatchingMask:(unsigned long long)a0 except:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 onPageController:(id)a3;
- (id)_createHighlightAnnotationWithAttributeTag:(long long)a0;
- (id)_highlightsInCharacterIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 onPageController:(id)a1;
- (void)beginContinuousHighlighting;
- (void)clearHighlightsWithinSelection;
- (void)continueHighlighting;
- (void)endContinuousHighlighting;
- (id)highlightsWithinSelection;
- (void)performOneShotHighlightWithAttributeTag:(long long)a0;

@end
