@class NSString;

@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)a0 taskFlags:(long long)a1;
- (BOOL)deleteAllCompletedTasks;
- (BOOL)storePTask:(id)a0;
- (BOOL)_networkCall_InsertRowGuid:(id)a0 taskFlags:(long long)a1;
- (id)loadMostRecentMessagePTasks;
- (BOOL)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
- (BOOL)updateTaskFlagsForPTask:(id)a0;
- (id)_networkCall_IMDMessagePTaskSelectWithLimit:(long long)a0;

@end
