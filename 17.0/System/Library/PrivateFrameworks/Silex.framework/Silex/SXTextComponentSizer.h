@class NSString, SXTextLayouter, SXTextResizer;

@interface SXTextComponentSizer : SXComponentSizer <SXTextSourceDataSource>

@property (retain, nonatomic) SXTextResizer *textResizer;
@property (retain, nonatomic) SXTextLayouter *textLayouter;
@property (readonly, nonatomic) unsigned long long stringLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (void)addExclusionPath:(id)a0;
- (id)additionsForTextSource:(id)a0;
- (id)componentTextStyleForTextSource:(id)a0 inheritingFromDefaultStyles:(BOOL)a1;
- (id)contentSizeCategoryForTextSource:(id)a0;
- (id)defaultComponentTextStyleForTextSource:(id)a0;
- (id)defaultComponentTextStylesForTextSource:(id)a0;
- (id)existingExclusionPathForComponentWithIdentifier:(id)a0;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentStyle:(id)a2 DOMObjectProvider:(id)a3 layoutOptions:(id)a4 textComponentLayoutHosting:(id)a5 textSourceFactory:(id)a6;
- (id)inlineTextStylesForTextSource:(id)a0;
- (void)removeAllExclusionPaths;
- (id)snapLines;
- (id)textResizerForTextSource:(id)a0;
- (id)textRulesForTextSource:(id)a0;
- (id)textStyleForIdentifier:(id)a0;
- (double)verticalPositionForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
