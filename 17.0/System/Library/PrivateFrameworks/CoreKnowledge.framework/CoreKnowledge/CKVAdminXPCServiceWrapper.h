@class NSString, CKVXPCServiceBridge;

@interface CKVAdminXPCServiceWrapper : NSObject <CKVAdminServiceProvider, CKVAdminService> {
    CKVXPCServiceBridge *_xpcServiceBridge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (oneway void)handleTask:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (id)adminService;
- (oneway void)beginEvaluation:(id)a0 clean:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)captureVocabularySnapshot:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteAllItemsWithUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteAllItemsWithUserId:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)fetchLocalItemsBatchWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (oneway void)findProfileSnapshotsNearDate:(id)a0 completion:(id /* block */)a1;
- (oneway void)finishEventSimulation:(id /* block */)a0;
- (oneway void)rebuildSpeechProfileForUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)startEventSimulation:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)triggerMaintenance:(id /* block */)a0;
- (oneway void)triggerMigration:(BOOL)a0 completeAfterTrigger:(BOOL)a1 completion:(id /* block */)a2;

@end
