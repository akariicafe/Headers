@class NSUserDefaults;

@interface ICBluetoothKeyboardHintViewController : ICHintViewController

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) BOOL forceShow;
@property (readonly, nonatomic) BOOL hasAttachedHardwareKeyboard;
@property (readonly, nonatomic) BOOL hasEditedNote;
@property (readonly, nonatomic) BOOL hasShownHint;
@property (nonatomic) BOOL isInHardwareKeyboardMode;
@property (readonly, nonatomic) BOOL shouldShow;

- (id)initWithRootViewController:(id)a0;
- (void)show;
- (void)viewDidLoad;
- (void)keyboardDidChangeFrame:(id)a0;
- (void).cxx_destruct;
- (void)didEditNote;
- (BOOL)hasAttachedBluetoothKeyboard;
- (id)initWithRootViewController:(id)a0 userDefaults:(id)a1 buttonAction:(id /* block */)a2;
- (void)showIfNeeded;
- (void)updateHardwareKeyboardMode;

@end
