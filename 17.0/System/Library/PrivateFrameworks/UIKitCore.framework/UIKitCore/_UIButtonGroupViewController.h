@class UIColor, NSString, _UIButtonBar, NSArray, UIScrollView;

@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    _UIButtonBar *_originalOwner;
    _UIButtonBar *_buttonBar;
    UIScrollView *_scrollView;
    NSArray *_barButtonItemGroups;
    BOOL _overLightKeyboard;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dismissIfNecessary;
- (id)initWithBarButtonItemGroups:(id)a0 overLightKeyboard:(BOOL)a1;

@end
