@interface SBSplashBoardController : XBApplicationController {
    BOOL _isObservingAppLanguageChanges;
}

- (void)dealloc;
- (void)_handleLocaleDidChangeNotification;
- (void)_observeLocaleChanges;
- (void)configureForLocaleChanges;
- (void)_checkForChangedLocale;
- (id)_splashBoardApplicationForBundleID:(id)a0;

@end
