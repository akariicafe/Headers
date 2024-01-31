@protocol CKPendingMomentSharePhotoStackBalloonViewDelegate;

@interface CKPendingMomentSharePhotoStackBalloonView : CKGenericPhotoStackBalloonView

@property (weak, nonatomic) id<CKPendingMomentSharePhotoStackBalloonViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForDisplay;
- (void)handleTap:(id)a0;
- (id)_createStackView;
- (void)configureForMessagePart:(id)a0;

@end
