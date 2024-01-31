@class LPLinkMetadata;

@interface CKWorkoutBalloonView : CKLinkBalloonView

@property (retain, nonatomic) LPLinkMetadata *metadata;

- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)tapGestureRecognized:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;

@end
