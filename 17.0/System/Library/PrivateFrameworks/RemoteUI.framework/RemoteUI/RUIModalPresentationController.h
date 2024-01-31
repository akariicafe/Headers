@class RUIStyle;

@interface RUIModalPresentationController : _UIFormSheetPresentationController {
    RUIStyle *_style;
}

@property (nonatomic, setter=setRUIModalPresentationStyle:) unsigned long long ruiModalPresentationStyle;

- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (unsigned long long)modalPresentationStyle;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 modalPresentationStyle:(unsigned long long)a2;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 modalPresentationStyle:(unsigned long long)a2 style:(id)a3;
- (void).cxx_destruct;
- (double)_sheetHeightWithSize:(struct CGSize { double x0; double x1; })a0;

@end
