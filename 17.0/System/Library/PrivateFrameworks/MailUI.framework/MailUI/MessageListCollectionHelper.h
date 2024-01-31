@class NSMutableDictionary, EMObjectID, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MessageListCollectionHelper : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } pendingReadCancelableLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSObject<OS_os_log> *clientLog;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (retain, nonatomic) NSMutableDictionary *pendingReadTimeoutCancelables;
@property (readonly, nonatomic) EMObjectID *sectionObjectID;
@property (nonatomic) long long destructiveActionConversationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)addItemIDs:(id)a0 after:(id)a1 snapshot:(id)a2 section:(id)a3 validateOtherSections:(BOOL)a4;
- (long long)addItemIDs:(id)a0 before:(id)a1 snapshot:(id)a2 section:(id)a3 validateOtherSections:(BOOL)a4;
- (id)changeItemIDs:(id)a0 snapshot:(id)a1;
- (void)didScheduleReadInteractionForItemID:(id)a0;
- (id)initWithLog:(id)a0 updateQueueName:(id)a1 sectionObjectID:(id)a2;
- (id)initWithLoggableClient:(id)a0 updateQueueName:(id)a1 sectionObjectID:(id)a2;
- (long long)moveItemID:(id)a0 after:(id)a1 snapshot:(id)a2 section:(id)a3;
- (long long)moveItemID:(id)a0 before:(id)a1 snapshot:(id)a2 section:(id)a3;
- (void)removePendingReadCancelablesForItemID:(id)a0;

@end
