@class NSString, UIColorWell;

@interface PRREColorTableViewCell : PRRETableViewCell <UIColorPickerViewControllerDelegate> {
    UIColorWell *_well;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_configure;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_currentValue;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)colorPickerViewControllerDidFinish:(id)a0;
- (void)_setCurrentValue:(id)a0;
- (void)_tapped:(id)a0;

@end
