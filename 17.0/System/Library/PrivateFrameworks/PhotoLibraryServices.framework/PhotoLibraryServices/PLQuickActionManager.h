@class SBSApplicationShortcutService, NSData, NSOperationQueue, PLDatabaseContext;

@interface PLQuickActionManager : NSObject {
    id _cameraWellObserver;
    NSOperationQueue *_operationQueue;
    PLDatabaseContext *_databaseContext;
}

@property (class, nonatomic) BOOL shouldShowInternalQuickActions;

@property (retain, nonatomic, setter=_setCachedMostRecentPhotoData:) NSData *_cachedMostRecentPhotoData;
@property (nonatomic, setter=_setMostRecentPhotoIsInvalid:) BOOL _mostRecentPhotoIsInvalid;
@property (retain, nonatomic, setter=_setAppShortcutService:) SBSApplicationShortcutService *_appShortcutService;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutServiceClass:) Class _SBSApplicationShortcutServiceClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutItemClass:) Class _SBSApplicationShortcutItemClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutCustomImageIconClass:) Class _SBSApplicationShortcutCustomImageIconClass;

- (BOOL)_userHasPhotos;
- (id)_shortcutItemWithType:(id)a0 localizedTitle:(id)a1 iconName:(id)a2;
- (void)dealloc;
- (void)buildQuickActionItems;
- (id)_buildFavoritesQuickAction;
- (id)_shortcutSystemImageNamed:(id)a0;
- (id)_buildSearchQuickAction;
- (id)initWithDatabaseContext:(id)a0;
- (id)_buildOpenAppWithShippingUIQuickAction;
- (id)_buildMostRecentPhotoQuickAction;
- (void).cxx_destruct;
- (id)_buildOneYearAgoQuickAction;
- (BOOL)_userHasPhotosFromLastYear;
- (void)cameraPreviewWellImageDidChange;

@end
