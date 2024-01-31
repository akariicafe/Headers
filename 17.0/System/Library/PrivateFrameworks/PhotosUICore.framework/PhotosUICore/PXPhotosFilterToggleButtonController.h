@class PXPhotosViewModel, UIButton, NSString;

@interface PXPhotosFilterToggleButtonController : NSObject <PXChangeObserver>

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) UIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)_updateButton;
- (void)_setupButtonWithConfiguration:(id)a0;
- (id)initWithViewModel:(id)a0 buttonConfiguration:(id)a1;

@end
