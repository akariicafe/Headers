@class NSString;

@interface ATXHeuristicReturnCall : NSObject <ATXContextHeuristicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)permanentRefreshTriggers;
- (id)heuristicResultWithEnvironment:(id)a0;
- (id)_bestContactHandleFromDataSourceWithContact:(id)a0 service:(id)a1 environment:(id)a2;
- (id)_actionWithCall:(id)a0 contactDict:(id)a1 contactId:(id)a2 handle:(id)a3 service:(id)a4;
- (void)_addActionWithContactId:(id)a0 toActions:(id)a1 environment:(id)a2 lastCallDict:(id)a3;
- (id)_contactsDataSourceWithIdentifiers:(id)a0 environment:(id)a1;
- (id)_duetInteractionCountFromDataSourceWithHandles:(id)a0 date:(id)a1 environment:(id)a2;
- (id)_interactionCountAfterCall:(id)a0 contactDict:(id)a1 environment:(id)a2;
- (id)_serviceWithCall:(id)a0;

@end
