@class NSHashTable, NSString, NSData, NSSet, MRGroupSessionXPCConnection, NSObject, MRGroupSessionToken, NSMapTable;
@protocol OS_dispatch_queue, MRGroupSessionParticipant, MRGroupSessionDelegate;

@interface MRRemoteControlGroupSession : NSObject <MRGroupSession, MRGroupSessionSubscriberClientXPCProtocol>

@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSSet *participants;
@property (retain, nonatomic) NSMapTable *participantMap;
@property (retain, nonatomic) NSSet *pendingParticipants;
@property (retain, nonatomic) NSMapTable *pendingParticipantMap;
@property (retain, nonatomic) NSSet *members;
@property (retain, nonatomic) NSMapTable *memberMap;
@property (retain, nonatomic) NSHashTable *optimisticApprovedPendingParticipants;
@property (retain, nonatomic) NSHashTable *optimisticDeniedPendingParticipants;
@property (retain, nonatomic) NSHashTable *optimisticRemovedParticipants;
@property (retain, nonatomic) id<MRGroupSessionParticipant> host;
@property (retain, nonatomic) id<MRGroupSessionParticipant> localParticipant;
@property (retain, nonatomic) MRGroupSessionToken *joinToken;
@property (retain, nonatomic) NSData *synchronizedMetadata;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) MRGroupSessionXPCConnection *connection;
@property (weak, nonatomic) id<MRGroupSessionDelegate> delegate;
@property (readonly, nonatomic) BOOL isLocalSession;
@property (readonly, nonatomic) NSString *localizedSessionName;
@property (readonly, nonatomic) unsigned char routeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeConnection;
- (void)dealloc;
- (void)session:(id)a0 didChangeState:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (id)participantForIdentifier:(id)a0;
- (void)session:(id)a0 didInvalidateWithError:(id)a1;
- (void)approvePendingParticipant:(id)a0 completion:(id /* block */)a1;
- (id)assertSessionManagementScreenVisible;
- (void)denyPendingParticipant:(id)a0 completion:(id /* block */)a1;
- (id)memberForIdentifier:(id)a0;
- (void)notifyDelegateOfInvalidation:(id)a0;
- (void)parseParticipants:(id)a0 local:(id *)a1 host:(id *)a2 parsed:(id *)a3;
- (id)pendingParticipantForIdentifier:(id)a0;
- (void)removeAllParticipantsWithCompletion:(id /* block */)a0;
- (void)removeParticipant:(id)a0 completion:(id /* block */)a1;
- (void)session:(id)a0 didUpdateMembers:(id)a1;
- (void)session:(id)a0 didUpdateParticipants:(id)a1;
- (void)session:(id)a0 didUpdatePendingParticipants:(id)a1;
- (void)session:(id)a0 didUpdateSynchronizedMetadata:(id)a1;
- (void)updateParticipantsForOptimisticStateChange;

@end
