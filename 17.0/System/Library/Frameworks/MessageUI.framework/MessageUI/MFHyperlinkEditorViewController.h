@class NSString, UITextField, UILabel, UIButton;

@interface MFHyperlinkEditorViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) UILabel *linkEditorTitle;
@property (retain, nonatomic) UITextField *linkEditorTextField;
@property (retain, nonatomic) UIButton *linkEditorCancelButton;
@property (nonatomic) BOOL shouldShowCloseButton;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)dismissLinkEditor;
- (id)initWithTitle:(id)a0 text:(id)a1 mode:(unsigned long long)a2 shouldShowCloseButton:(BOOL)a3 completion:(id /* block */)a4;

@end
