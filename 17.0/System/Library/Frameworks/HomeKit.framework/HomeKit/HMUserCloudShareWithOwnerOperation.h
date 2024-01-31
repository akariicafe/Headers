@class HMUser, NSUUID, NSString, CKShare, NSObject, CKContainer;
@protocol OS_os_log;

@interface HMUserCloudShareWithOwnerOperation : NSOperation <HMFLogging> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSUUID *operationID;
@property (readonly, nonatomic) HMUser *currentUser;
@property (readonly, nonatomic) HMUser *ownerUser;
@property (retain, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) BOOL allowWriteAccess;
@property (readonly) id /* block */ analyticsEventSender;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)main;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithShare:(id)a0 container:(id)a1 ownerUser:(id)a2 allowWriteAccess:(BOOL)a3 currentUser:(id)a4;
- (void)sendShareToOwner:(id)a0 from:(id)a1 savedOwnerAsParticipant:(id)a2 share:(id)a3 completion:(id /* block */)a4;
- (void)fetchParticipantForLookupInfo:(id)a0 completion:(id /* block */)a1;
- (id)initWithShare:(id)a0 container:(id)a1 ownerUser:(id)a2 allowWriteAccess:(BOOL)a3 currentUser:(id)a4 analyticsEventSender:(id /* block */)a5;
- (void)removeOwnerAsParticipant:(id)a0 completion:(id /* block */)a1;
- (void)saveShareAndObtainSavedOwner:(id)a0 completion:(id /* block */)a1;

@end
