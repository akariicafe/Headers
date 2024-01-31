@class SBSHomeScreenService, NSUserDefaults;

@interface GCGameIntentManager : NSObject {
    BOOL _enabled;
    NSUserDefaults *_defaults;
    unsigned long long _currentCategory;
    SBSHomeScreenService *_service;
}

+ (id)instance;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)stringForCategory:(unsigned long long)a0;
- (void)launchToSpringboard;
- (void)stepToNextCategory;
- (void)toggleGamesFolder;
- (void)toggleGamesFolderAndDismissOnly:(BOOL)a0;
- (void)tryPresentAppLibraryPod;

@end
