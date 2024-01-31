@class LPQuoteView, LPImageView, LPDomainNameIndicator, LPContactsBadgeView, LPCaptionBarView, LPComponentView, LPBackgroundColorView;

@interface LPLinkViewComponents : NSObject

@property (retain, nonatomic) LPCaptionBarView *captionBar;
@property (retain, nonatomic) LPComponentView *media;
@property (retain, nonatomic) LPBackgroundColorView *mediaBackground;
@property (retain, nonatomic) LPCaptionBarView *mediaTopCaptionBar;
@property (retain, nonatomic) LPCaptionBarView *mediaBottomCaptionBar;
@property (retain, nonatomic) LPQuoteView *quote;
@property (retain, nonatomic) LPImageView *backgroundImage;
@property (retain, nonatomic) LPDomainNameIndicator *domainNameIndicator;
@property (retain, nonatomic) LPContactsBadgeView *contactsBadge;

- (void).cxx_destruct;
- (void)applyToAllViews:(id /* block */)a0;

@end
