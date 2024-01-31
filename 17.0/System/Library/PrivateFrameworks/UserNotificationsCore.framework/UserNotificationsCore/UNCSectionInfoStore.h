@class UNCNotificationSettingsPersistentStore, NSMutableDictionary, UNCEffectiveSettings, NSMutableSet, UNCBulletinServerConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UNCSectionInfoStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_gatewayQueue;
    NSMutableDictionary *_queue_sectionInfoByID;
    NSMutableSet *_queue_activeSectionIDs;
    NSMutableArray *_queue_sortedSectionIDs;
    NSMutableDictionary *_queue_clearedSectionsByID;
    UNCEffectiveSettings *_settings;
    UNCBulletinServerConnection *_bbServerConnection;
    UNCNotificationSettingsPersistentStore *_persistence;
}

- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (void).cxx_destruct;
- (id)sectionInfoByID;
- (id)activeSectionIDs;
- (void)addActiveSectionID:(id)a0;
- (id)allSortedActiveSections:(BOOL)a0;
- (id)allSortedSectionInfo:(BOOL)a0;
- (id)allUnsortedSectionInfoIDs;
- (id)clearedInfoForSectionID:(id)a0;
- (id)clearedSectionsByID;
- (id)effectiveSectionInfoForSectionInfo:(id)a0;
- (void)removeSectionWithID:(id)a0;
- (id)sectionInfoForSectionID:(id)a0 effective:(BOOL)a1;
- (id)sectionInfosByIDForSectionIDs:(id)a0 effective:(BOOL)a1;
- (void)setClearedInfo:(id)a0 forSectionID:(id)a1;
- (void)setClearedSectionsByID:(id)a0;
- (void)setSectionInfoByID:(id)a0;
- (id)sortedSectionIDs;
- (id)sortedSectionInfoForSectionIDs:(id)a0 effective:(BOOL)a1;
- (id)_queue_effectiveSectionInfoForSectionInfo:(id)a0;
- (void)_queue_removeSectionWithID:(id)a0;
- (id)_queue_sectionInfoForSectionID:(id)a0 effective:(BOOL)a1;
- (void)_queue_sortSectionIDs:(id)a0 usingGuideArray:(id)a1;
- (id)_queue_sortedSectionInfoForSectionIDs:(id)a0 effective:(BOOL)a1;
- (id)initWithEffectiveSettings:(id)a0 persistence:(id)a1;

@end
