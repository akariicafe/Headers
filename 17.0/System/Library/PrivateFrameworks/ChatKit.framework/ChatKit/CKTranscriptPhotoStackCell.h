@class UIPinchGestureRecognizer;
@protocol CKTranscriptPhotoStackCellDelegate;

@interface CKTranscriptPhotoStackCell : CKTranscriptBalloonCell

@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (weak, nonatomic) id<CKTranscriptPhotoStackCellDelegate> delegate;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)allowsSwipeToReply;
- (void)handlePinchGesture:(id)a0;
- (void)layoutSubviewsForAlignmentContents;
- (id)photoStackBalloonView;
- (void)setWantsContactImageLayout:(BOOL)a0;

@end
