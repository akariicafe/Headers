@protocol CACContextCluesWelcomeControllerDelegate;

@interface CACContextCluesWelcomeController : OBTextWelcomeController

@property (weak, nonatomic) id<CACContextCluesWelcomeControllerDelegate> delegate;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
