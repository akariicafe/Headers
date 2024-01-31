@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BBXPCSectionInfoStore : NSObject <BBSectionInfoStoreInterface> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_settingsPersistenceConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_resetSettingsPersistenceConnection;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (void).cxx_destruct;
- (id)_ensureSettingsPersistenceConnection;
- (id)sectionInfoByID;
- (id)activeSectionIDs;
- (void)addActiveSectionID:(id)a0;
- (id)allSortedActiveSections:(BOOL)a0;
- (id)allSortedSectionInfo:(BOOL)a0;
- (id)allUnsortedSectionInfoIDs;
- (id)asyncServerProxyObject;
- (id)clearedInfoForSectionID:(id)a0;
- (id)clearedSectionsByID;
- (id)effectiveSectionInfoForSectionInfo:(id)a0;
- (void)removeSectionWithID:(id)a0;
- (id)sectionInfoForSectionID:(id)a0 effective:(BOOL)a1;
- (id)sectionInfosByIDForSectionIDs:(id)a0 effective:(BOOL)a1;
- (id)serverProxyObject;
- (void)setClearedInfo:(id)a0 forSectionID:(id)a1;
- (void)setClearedSectionsByID:(id)a0;
- (void)setSectionInfoByID:(id)a0;
- (id)sortedSectionIDs;
- (id)sortedSectionInfoForSectionIDs:(id)a0 effective:(BOOL)a1;

@end
