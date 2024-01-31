@class NSString;

@interface CNKCNMeCardSharingSettingsViewControllerObserver : NSObject <CNMeCardSharingSettingsViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sharingSettingsViewController:(id)a0 didSelectSharingAudience:(unsigned long long)a1;
- (void)sharingSettingsViewController:(id)a0 didUpdateSharingState:(BOOL)a1;
- (void)sharingSettingsViewController:(id)a0 didUpdateWithSharingResult:(id)a1;

@end
