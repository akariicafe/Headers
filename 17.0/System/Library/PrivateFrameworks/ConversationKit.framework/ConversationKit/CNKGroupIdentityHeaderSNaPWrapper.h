@class NSString;

@interface CNKGroupIdentityHeaderSNaPWrapper : NSObject <CNGroupIdentityHeaderViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)groupIdentityHeaderViewController:(id)a0 didDismissSharedProfileBannerWithUpdatedContact:(id)a1 forAction:(unsigned long long)a2;
- (void)groupIdentityHeaderViewController:(id)a0 sharedProfileBannerDidUpdateContact:(id)a1 forAction:(unsigned long long)a2;
- (void)configureGroupIdentityHeaderViewController:(id)a0 contact:(id)a1;
- (void)handleSharedProfileUpdateForController:(id)a0 contact:(id)a1;
- (void)setOracleUsingController:(id)a0 contact:(id)a1;

@end
