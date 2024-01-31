@class _TtC26DocumentManagerExecutables33DOCTextFieldRoundedBackgroundView, DOCAddTagViewTextField, DOCTagDotView, CAShapeLayer, UILabel, NSArray, NSString;
@protocol DOCAddTagTextFieldDelegate;

@interface DOCAddTagView : UIView <UITextFieldDelegate, UIScribbleInteractionDelegate> {
    _TtC26DocumentManagerExecutables33DOCTextFieldRoundedBackgroundView *_backgroundDuringTextInput;
}

@property (readonly, nonatomic) DOCTagDotView *tagDotView;
@property (readonly, nonatomic) UILabel *addNewTagLabel;
@property (readonly, nonatomic) DOCAddTagViewTextField *tagNameTextField;
@property (readonly, nonatomic) CAShapeLayer *backgroundShapeLayer;
@property (readonly, nonatomic) NSArray *notificationObservances;
@property (weak, nonatomic) id<DOCAddTagTextFieldDelegate> delegate;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)commit;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)updateBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)layoutSubviews;
- (void)scribbleInteractionWillBeginWriting:(id)a0;
- (BOOL)scribbleInteractionShouldDelayFocus:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)_updateBorderPath;
- (void)_updateShapeLayerAttributes;
- (void)setShowingAddNewTagLabel:(BOOL)a0;
- (void)setupHoverEffects;
- (void)updateHoverEffects;

@end
