@class UIAlertAction;

@interface ICAlertController : UIAlertController

@property (nonatomic) BOOL didDismissWithDismissWithoutActionBlock;
@property (nonatomic) BOOL didPerformAction;
@property (copy, nonatomic) id /* block */ dismissWithoutActionBlock;
@property (retain, nonatomic) UIAlertAction *dismissAction;
@property (nonatomic) BOOL shouldDismissWhenShowingNote;
@property (nonatomic) BOOL canAppearAbovePasswordEntryView;

- (void)commonInit;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dismissWhenPossible;

@end
