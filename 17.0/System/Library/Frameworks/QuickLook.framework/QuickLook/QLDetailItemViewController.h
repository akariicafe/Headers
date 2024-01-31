@class UIStackView, NSArray, UIButton, QLDetailItemViewControllerState, UIView, NSString, QLFileIconImageView;

@interface QLDetailItemViewController : QLItemViewController {
    QLFileIconImageView *_filePreviewImageView;
    UIStackView *_informationStackView;
    UIButton *_actionIconButton;
    UIButton *_actionButton;
    BOOL _isSettingStateAnimated;
    UIView *_currentActionButtonView;
    NSString *_previewTitle;
}

@property (retain, nonatomic) QLDetailItemViewControllerState *state;
@property (retain, nonatomic) NSArray *information;

- (void)setState:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (void)performAction;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)canSwipeToDismiss;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (id)_scalableSystemFontOfSize:(double)a0;
- (void)_setActionButtonView:(id)a0 animated:(BOOL)a1 actionButtonLabel:(id)a2 informationVisible:(BOOL)a3;
- (void)_updateInformation;

@end
