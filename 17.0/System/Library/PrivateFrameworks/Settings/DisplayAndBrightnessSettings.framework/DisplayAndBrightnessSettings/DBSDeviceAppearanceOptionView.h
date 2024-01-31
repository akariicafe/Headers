@class UIStackView, NSString, UIImageView, UILabel, DBSCheckmarkView, UIImpactFeedbackGenerator;
@protocol DBSDeviceAppearanceOptionViewDelegate;

@interface DBSDeviceAppearanceOptionView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIStackView *_stackView;
@property (retain, nonatomic) UIImageView *_previewImageView;
@property (retain, nonatomic) UILabel *_timeLabel;
@property (retain, nonatomic) UILabel *_label;
@property (retain, nonatomic) DBSCheckmarkView *_checkmarkView;
@property (retain, nonatomic) UIImpactFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, getter=highlighted) BOOL highlight;
@property (weak, nonatomic) id<DBSDeviceAppearanceOptionViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long appearanceOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_configureView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appearanceOption:(unsigned long long)a1;
- (void)_updateViewForCurrentInterfaceStyle:(long long)a0;
- (void)_userDidTapOnView:(id)a0;

@end
