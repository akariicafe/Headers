@class NSString;

@interface STIntroWelcomeViewController : OBWelcomeController

@property (readonly, copy) NSString *childName;
@property (readonly) BOOL forceParentalControls;
@property (readonly, copy) id /* block */ continueHandler;
@property (readonly, copy) id /* block */ endHandler;

- (void)loadView;
- (void).cxx_destruct;
- (void)_turnOnScreenTime:(id)a0;
- (id)initWithChildName:(id)a0 forceParentalControls:(BOOL)a1 continueHandler:(id /* block */)a2 endHandler:(id /* block */)a3;

@end
