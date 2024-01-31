@class NSString, CKShareMetadata, NSSet, UNNotificationResponse, NSDictionary, FBSSceneSpecification, UIApplicationShortcutItem, FBSScene;

@interface UISceneConnectionOptions : NSObject {
    NSSet *_cleanupBlocks;
}

@property (readonly, nonatomic) NSDictionary *_launchOptionsDictionary;
@property (readonly, weak, nonatomic) FBSScene *_fbsScene;
@property (readonly, weak, nonatomic) FBSSceneSpecification *_specification;
@property (readonly, copy, nonatomic) NSSet *_itemProviderCollections;
@property (readonly, copy, nonatomic) NSSet *URLContexts;
@property (readonly, nonatomic) NSString *sourceApplication;
@property (readonly, nonatomic) NSString *handoffUserActivityType;
@property (readonly, copy, nonatomic) NSSet *userActivities;
@property (readonly, nonatomic) UNNotificationResponse *notificationResponse;
@property (readonly, nonatomic) UIApplicationShortcutItem *shortcutItem;
@property (readonly, nonatomic) CKShareMetadata *cloudKitShareMetadata;

- (id)userActivities;
- (id)notificationResponse;
- (id)description;
- (void)performPostConnectionCleanup;
- (void).cxx_destruct;
- (id)cloudKitShareMetadata;
- (id)_initWithConnectionOptionsContext:(id)a0 fbsScene:(id)a1 specification:(id)a2;
- (id)URLContexts;
- (id)handoffUserActivityType;
- (id)shortcutItem;
- (id)sourceApplication;

@end
