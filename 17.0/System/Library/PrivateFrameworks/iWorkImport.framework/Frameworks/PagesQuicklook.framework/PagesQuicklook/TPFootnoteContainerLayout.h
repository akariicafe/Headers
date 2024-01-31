@class NSString, TSWPPadding;
@protocol TSWPFootnoteMarkProvider;

@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPFootnoteMarkProvider> {
    BOOL _vertical;
    double _lineWidth;
    double _footnoteSpacing;
    id<TSWPFootnoteMarkProvider> _footnoteMarkProvider;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) double blockHeight;
@property (readonly, nonatomic) double maxBlockHeight;
@property (nonatomic) BOOL includeFootnoteSeparatorLine;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } footnoteSeparatorLineFrame;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)validate;
- (void)setLineWidth:(double)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)computeLayoutGeometry;
- (id)dependentsOfTextLayout:(id)a0;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (Class)repClassForTextLayout:(id)a0;
- (Class)repClassOverride;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)textIsVertical;
- (BOOL)textLayoutShouldLayoutVertically:(id)a0;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)markStringForFootnoteReferenceStorage:(id)a0;
- (void)setFootnoteSpacing:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (BOOL)descendersCannotClip;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)a0;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (void)addFootnoteLayout:(id)a0;
- (id)initWithFootnoteMarkProvider:(id)a0 vertical:(BOOL)a1 lineWidth:(double)a2 maxFootnoteBlockHeight:(double)a3 footnoteSpacing:(double)a4;
- (id)markStringForFootnoteReferenceStorage:(id)a0 ignoreDeletedFootnotes:(BOOL)a1 forceDocumentEndnotes:(BOOL)a2;
- (void)removeAllFootnoteLayouts;
- (void)removeFootnoteLayout:(id)a0;
- (void)removeFootnoteLayoutWithInfo:(id)a0;
- (BOOL)textIsVerticalForFootnoteReferenceStorage:(id)a0;
- (void)trimFootnoteLayoutsFromIndex:(unsigned long long)a0;

@end
