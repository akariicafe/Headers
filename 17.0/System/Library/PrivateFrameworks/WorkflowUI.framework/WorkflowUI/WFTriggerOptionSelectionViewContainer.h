@class WFTriggerOptionSelectionView, UIStackView, NSString, UIImpactFeedbackGenerator;
@protocol WFTriggerOptionSelectionViewContainerDelegate;

@interface WFTriggerOptionSelectionViewContainer : UIView <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) WFTriggerOptionSelectionView *leftView;
@property (readonly, nonatomic) WFTriggerOptionSelectionView *rightView;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) BOOL leftViewSelected;
@property (nonatomic) BOOL rightViewSelected;
@property (weak, nonatomic) id<WFTriggerOptionSelectionViewContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setSelectedImageTintColor:(id)a0;
- (void).cxx_destruct;
- (void)handleMultiSelectViewPressWithRecognizer:(id)a0;
- (BOOL)leftViewSelected;
- (BOOL)rightViewSelected;
- (void)setLeftOptionImage:(id)a0 selectedImage:(id)a1 label:(id)a2 selected:(BOOL)a3 tintColor:(id)a4;
- (void)setLeftViewSelected:(BOOL)a0;
- (void)setRightOptionImage:(id)a0 selectedImage:(id)a1 label:(id)a2 selected:(BOOL)a3 tintColor:(id)a4;
- (void)setRightViewSelected:(BOOL)a0;

@end
