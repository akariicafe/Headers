@class NSArray, CKStaticImageStackView;

@interface CKStaticPhotoStackBalloonView : CKBalloonView

@property (retain, nonatomic) CKStaticImageStackView *stackView;
@property (retain, nonatomic) NSArray *mediaObjects;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureForMessagePart:(id)a0;
- (double)stackCornerRadius;

@end
