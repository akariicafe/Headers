@class IMBusinessNameManager, NSMutableDictionary, NSHashTable;

@interface IMHandleRegistrar : NSObject {
    NSMutableDictionary *_siblingsMap;
    NSHashTable *_allIMHandles;
    NSMutableDictionary *_IDToHandlesMap;
    NSMutableDictionary *_CNIDToHandlesMap;
    IMBusinessNameManager *_businessNameManager;
}

+ (id)sharedInstance;

- (void)_emptySiblingCacheForIMHandleGUID:(id)a0;
- (id)init;
- (id)getIDsForInitialBatch;
- (void)_addIMHandleToIDToHandlesMap:(id)a0;
- (id)getIDsForFinalBatch;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)a0 andCNContact:(id)a1;
- (id)_existingChatSiblingsForHandle:(id)a0;
- (id)IDToHandlesMap;
- (void)clearSiblingCacheForIMHandle:(id)a0;
- (id)_chatSiblingsForHandle:(id)a0;
- (void)removeHandleFromCNIDMap:(id)a0 withCNID:(id)a1;
- (void)addHandleToCNIDMap:(id)a0 CNContact:(id)a1;
- (id)handlesForCNIdentifier:(id)a0;
- (void)_dumpOutAllIMHandlesForAccount:(id)a0;
- (void)_dumpOutAllIMHandles;
- (void)_removeIMHandleToIDToHandlesMap:(id)a0;
- (void)_postContactChangeHistoryEventClientNotifications;
- (id)getIDsForAllIMHandles;
- (id)getIMHandlesForID:(id)a0;
- (id)allIMHandles;
- (id)siblingsForIMHandle:(id)a0;
- (id)_existingAccountSiblingsForHandle:(id)a0;
- (void)registerIMHandle:(id)a0;
- (void)clearCNIDToHandlesMap;
- (void)_handleDropEverythingChangeHistoryEvent;
- (void).cxx_destruct;
- (void)unregisterIMHandle:(id)a0;
- (id)_accountSiblingsForHandle:(id)a0;
- (void)_handleDeleteContactChangeHistoryEvent:(id)a0;
- (void)_handleAddContactChangeHistoryEvent:(id)a0;
- (void)_addressBookChanged;
- (id)CNIDToHandlesMap;
- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;
- (void)_buildSiblingsForIMHandle:(id)a0;
- (void)_handleUpdateContactChangeHistoryEvent:(id)a0;
- (void)_clearSiblingsCacheForIMHandle:(id)a0 rebuildAfter:(BOOL)a1;

@end
