@class WBSAppLink;

@interface SFAppLinkBanner : SFLinkBanner

@property (readonly, nonatomic) WBSAppLink *appLink;

- (void).cxx_destruct;
- (id)initWithAppLink:(id)a0 openActionHandler:(id /* block */)a1;

@end
