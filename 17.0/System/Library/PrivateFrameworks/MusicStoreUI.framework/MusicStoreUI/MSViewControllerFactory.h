@interface MSViewControllerFactory : SUViewControllerFactory

- (id)newPlaceholderViewController;
- (id)newDownloadsViewController;
- (id)newNetworkLockoutViewControllerWithSection:(id)a0;
- (id)newViewControllerForPage:(id)a0 ofType:(long long)a1;
- (id)newViewControllerForTrackList:(id)a0;
- (id)newVolumeViewController;
- (id)newDownloadManagerOptions;

@end
