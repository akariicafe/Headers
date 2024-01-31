@class ACAccount;

@interface HUMultiUserTokenFixBannerItem : HUBannerItem

@property (retain, nonatomic) ACAccount *homeMediaAccount;
@property (nonatomic) BOOL forceHidden;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;

@end
