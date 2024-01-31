@class CRTombstoneOrderedSet, NSString, NSUUID, CRDocument, NSMutableOrderedSet, REMObjectID, NSObject;
@protocol REMCRReminderIDListDelegate;

@interface REMCRReminderIDList : NSObject <CRUndoDelegate, REMObjectIDProviding> {
    CRTombstoneOrderedSet *_reminderIDsStorage;
}

@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) NSUUID *replica;
@property (retain, nonatomic) CRDocument *document;
@property (retain, nonatomic) REMObjectID *remObjectID;
@property (weak, nonatomic) NSObject<REMCRReminderIDListDelegate> *delegate;
@property (readonly, nonatomic) NSMutableOrderedSet *reminderIDsProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (id)listFromSerializedData:(id)a0 replica:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (id)_orderedSet;
- (BOOL)wantsUndoCommands;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (id)copyForReplica:(id)a0;
- (void)addReminder:(id)a0;
- (unsigned long long)countOfReminderIDs;
- (unsigned long long)indexInReminderIDsOfObject:(id)a0;
- (id)initWithDocument:(id)a0 objectID:(id)a1;
- (void)insertObject:(id)a0 inReminderIDsAtIndex:(unsigned long long)a1;
- (id)objectInReminderIDsAtIndex:(unsigned long long)a0;
- (void)removeObjectFromReminderIDsAtIndex:(unsigned long long)a0;

@end
