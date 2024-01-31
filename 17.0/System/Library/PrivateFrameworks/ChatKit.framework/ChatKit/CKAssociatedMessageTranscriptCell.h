@class UIView, CKTranscriptCollectionViewLayoutAttributes;
@protocol CKAssociatedMessageTranscriptCellDelegate;

@interface CKAssociatedMessageTranscriptCell : CKTranscriptMessageContentCell

@property (copy, nonatomic) CKTranscriptCollectionViewLayoutAttributes *layoutAttributes;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rawAssociatedItemViewFrame;
@property (weak, nonatomic) id<CKAssociatedMessageTranscriptCellDelegate> delegate;
@property (retain, nonatomic) UIView *associatedItemView;
@property (nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long layoutIntent; unsigned long long associatedLayoutIntent; double parentPreviewWidth; double xScalar; double yScalar; double scale; double rotation; } geometryDescriptor;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } parentSize;
@property (nonatomic) double parentRotationOffset;
@property (nonatomic) double cumulativeAssociatedOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } adjustedContentAlignmentRect;

- (void)prepareForReuse;
- (void)addFilter:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)clearFilters;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })associatedViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (BOOL)failureButtonAdjustsContentAlignmentRect;
- (void)layoutSubviewsForAlignmentContents;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (double)swipeToReplyLayoutOffset;

@end
