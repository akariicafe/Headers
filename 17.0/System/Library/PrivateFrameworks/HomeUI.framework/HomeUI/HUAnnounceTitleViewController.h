@class UIImageView, NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUAnnounceTitleViewController : HUCenterFillOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController>

@property (retain, nonatomic) UIImageView *contentImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

@end
