@interface SBBookmarkIcon : SBHBookmarkIcon

@property (readonly, nonatomic) BOOL representsWebApp;

- (id)representedSceneIdentifier;
- (id)_applicationRecordForDefaultBrowser;
- (id)applicationToLaunch;

@end
