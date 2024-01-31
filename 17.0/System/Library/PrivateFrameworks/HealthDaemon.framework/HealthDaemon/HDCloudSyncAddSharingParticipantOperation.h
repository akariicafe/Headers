@class CKShareParticipant, NSArray, NSDictionary, NSString, HDSynchronousTaskGroup, NSMutableArray;

@interface HDCloudSyncAddSharingParticipantOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKShareParticipant *_participant;
    NSMutableArray *_clonedParticipants;
    NSArray *_zoneIdentifiers;
    BOOL _requireExistingRelationship;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (retain) CKShareParticipant *participant;
@property (copy) NSArray *zoneIdentifiers;
@property BOOL requireExistingRelationship;
@property (readonly, copy, nonatomic) NSArray *shareURLs;
@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURL;
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
