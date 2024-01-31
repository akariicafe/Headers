@class FPAccessControlManager;

@interface PUIFileAccessController : PSListController

@property (nonatomic) BOOL isAccess;
@property (retain, nonatomic) FPAccessControlManager *accessManager;

- (id)init;
- (id)specifiers;
- (void).cxx_destruct;
- (id)bundleIdentifiersAccessingFiles;
- (id)accesssForSpecifier:(id)a0;
- (id)applicationProxiesDictionary;
- (id)cameraAccessForSpecifier:(id)a0;
- (void)setAccess:(id)a0 forSpecifier:(id)a1;
- (void)setCameraAccess:(id)a0 forSpecifier:(id)a1;

@end
