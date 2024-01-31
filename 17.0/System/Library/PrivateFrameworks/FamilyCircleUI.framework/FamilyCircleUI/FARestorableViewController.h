@class PSRootController, PSSpecifier, NSString, UIViewController;

@interface FARestorableViewController : UIViewController <PSStateRestoration, PSController>

@property (retain, nonatomic) PSRootController *rootController;
@property (retain, nonatomic) UIViewController *parentController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifier;
- (void)setSpecifier:(id)a0;
- (void)setRootController:(id)a0;
- (id)rootController;
- (void)setParentController:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (void)showController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;

@end
