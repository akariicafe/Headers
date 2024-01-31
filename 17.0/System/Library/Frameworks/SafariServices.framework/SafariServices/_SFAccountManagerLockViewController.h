@class NSString, UILabel, UIImageView;

@interface _SFAccountManagerLockViewController : UIViewController <PSStateRestoration> {
    UILabel *_accountManagerLockedLabel;
    UIImageView *_lockImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)canBeShownFromSuspendedState;

@end
