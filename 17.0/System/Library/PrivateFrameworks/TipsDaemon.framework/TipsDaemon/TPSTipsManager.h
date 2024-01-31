@class TPSTipStatusController, TPSOfflineContentManager, NSDictionary, NSBundle, NSObject, TPSWidgetController, NSMutableArray, TPSNotificationController, TPSMetadata, NSString, TPSExperiment, NSArray, TPSWelcomeInformation;
@protocol OS_dispatch_queue, TPSTipsManagerDelegate;

@interface TPSTipsManager : NSObject <TPSWidgetControllerDelegate, TPSOfflineContentManagerDelegate, TPSDeviceProfileDataSource>

@property (nonatomic) BOOL contextualTipsInactive;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (retain, nonatomic) TPSOfflineContentManager *offlineContentManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableArray *sessionItems;
@property (retain, nonatomic) TPSMetadata *metadata;
@property (retain, nonatomic) NSArray *collections;
@property (retain, nonatomic) NSArray *tips;
@property (retain, nonatomic) NSDictionary *collectionsMap;
@property (retain, nonatomic) NSDictionary *tipsMap;
@property (copy, nonatomic) TPSExperiment *experiment;
@property (copy, nonatomic) NSString *rulesVersion;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (retain, nonatomic) TPSWidgetController *widgetController;
@property (retain, nonatomic) TPSWelcomeInformation *welcomeInformation;
@property (weak, nonatomic) id<TPSTipsManagerDelegate> delegate;
@property (retain, nonatomic) TPSNotificationController *notificationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesVersion;
+ (BOOL)eligibleForHardwareWelcomeNotification;
+ (BOOL)supportsFeaturedCollection;
+ (id)experiment;
+ (id)miniTipsAllowedBundles;
+ (void)removeExperimentCache;
+ (BOOL)needImmediateNotificationForType:(unsigned long long)a0;
+ (BOOL)setTipKitContentProcessFlagIfNeeded;
+ (void)resetTipKitContentProcessingFlag;
+ (id)miniTipsAllowedIdentifiers;
+ (void)removeWelcomeDocumentCache;
+ (void)removeWidgetUpdateDate;
+ (id)immediateNotificationIdentifierForType:(unsigned long long)a0;

- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (id)initWithTipStatusController:(id)a0;
- (BOOL)hasWidgetDocument;
- (id)welcomeDocumentFromContentPackage:(id)a0;
- (id)collectionSectionsFromCollectionMap:(id)a0 exclude:(id)a1;
- (void)removeOfflineContentForIdentifier:(id)a0;
- (void)contentWithMetaDictionary:(id)a0 documents:(id)a1 isRemote:(BOOL)a2 processOfflineContent:(BOOL)a3 processTipKitContent:(BOOL)a4 contextualEligibility:(BOOL)a5 widgetEligibility:(BOOL)a6 notificationEligibility:(BOOL)a7 preferredNotificationIdentifiers:(id)a8 completionHandler:(id /* block */)a9;
- (id)collectionSectionsWithEligibleCollectionSections:(id)a0 collectionSectionMap:(id)a1 featuredCollection:(id)a2;
- (BOOL)checklistCollectionHasMinSuggestedTips:(id)a0 tipMap:(id)a1;
- (id)offlineContentForidentifier:(id)a0;
- (void)updateSupplementalIdentifiersForIdentifier:(id)a0 fromDictionary:(id)a1;
- (BOOL)widgetController:(id)a0 validForDocument:(id)a1 documentDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3;
- (BOOL)isContentIdentifierHoldoutCamp:(id)a0;
- (void)processTipDocumentsDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (void)processClientConditions:(id)a0 targetingCache:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_updateExperimentCache;
- (void)processCollection:(id)a0 collectionsMap:(id)a1 ignoreSection:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)updateDocumentContent:(id)a0 withClientConditions:(id)a1 checklistCompletedConditions:(id)a2 usingDictionary:(id)a3;
- (void)_updatePauseStatus:(BOOL)a0;
- (void)updateContentIfOverrideImmediately:(BOOL)a0;
- (BOOL)isPreconditionValidForIdentifier:(id)a0 preconditionDictionary:(id)a1;
- (void)reindexSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)processTipsDeliveryInfo:(id)a0 deliveryInfoMap:(id)a1 targetingCache:(id)a2 completionHandler:(id /* block */)a3;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (id)collectionSectionMapWithCollections:(id)a0 availableCollectionSections:(id)a1 collectionIdToCollectionLabelMap:(id)a2;
- (void)contentForVariantIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)offlineContentManager:(id)a0 metaDictionary:(id)a1 documentsDictionary:(id)a2;
- (id)featureCollectionFromCollectionMap:(id)a0 collectionOrder:(id)a1 tipMap:(id)a2;
- (id)processSavedTips:(id)a0;
- (void)contentFromOrigin:(BOOL)a0 processTipKitContent:(BOOL)a1 contextualEligibility:(BOOL)a2 widgetEligibility:(BOOL)a3 notificationEligibility:(BOOL)a4 preferredNotificationIdentifiers:(id)a5 shouldDeferBlock:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (BOOL)shouldPerformWidgetUpdate;
- (void)finalEligibleContentWithCollections:(id)a0 collectionsMap:(id)a1 collectionDeliveryInfoMap:(id)a2 eligibleTipIdentifiers:(id)a3 eligibleContextualTipIdentifiers:(id)a4 allFullTipsMap:(id)a5 allMiniTipsMap:(id)a6 tipDeliveryInfoMap:(id)a7 deliveryInfoMap:(id)a8 completionHandler:(id /* block */)a9;
- (void)updateOfflineContent;
- (id)collectionStatusForCollection:(id)a0;
- (id)welcomeCollectionName;

@end
