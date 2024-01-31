@interface SFHighlightBannerTracker : WBSBannerTracker

+ (id)sharedTracker;

- (id)categoryName;
- (void)blockBannerForHighlight:(id)a0;
- (void)isBannerBlockedForHighlight:(id)a0 completion:(id /* block */)a1;
- (void)unblockBannerForHighlight:(id)a0;

@end
