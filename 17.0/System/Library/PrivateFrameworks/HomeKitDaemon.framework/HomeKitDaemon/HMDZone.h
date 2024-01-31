@class NSUUID, NSString, NSArray, NSSet, NSMutableDictionary, NSDictionary, HMFMessageDispatcher, NSObject, NSMutableArray, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDZone : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_roomUUIDs;
    NSMutableDictionary *_currentRooms;
}

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (copy) NSString *name;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (readonly, copy) NSArray *roomUUIDs;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rooms;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)dumpState;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_registerForMessages;
- (void)removeRoom:(id)a0;
- (void)_handleAddRoom:(id)a0;
- (id)_checkForAddValidity:(id)a0;
- (void)_handleRemoveRoom:(id)a0;
- (void)_handleRename:(id)a0;
- (BOOL)_handleSetRoomsTransactionWithRoomUUIDStrings:(id)a0 error:(id *)a1;
- (void)addRoomIfNotPresent:(id)a0;
- (id)backingStoreObjects:(long long)a0;
- (void)configure:(id)a0 queue:(id)a1;
- (id)initWithName:(id)a0 uuid:(id)a1 home:(id)a2 queue:(id)a3;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)updateZoneWithModel:(id)a0 message:(id)a1;

@end
