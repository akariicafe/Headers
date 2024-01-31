@class CKShare, CKRecordID;

@interface CKDModifyShareHandler : CKDModifyRecordHandler

@property (nonatomic) BOOL haveAddedOwnerToShare;
@property (nonatomic) BOOL isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property (nonatomic) struct _PCSPublicIdentityData { } *selfPPPCSOwnerIdentity;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKRecordID *shareID;

+ (id)modifyHandlerForDeleteWithShareID:(id)a0 operation:(id)a1;
+ (id)modifyHandlerWithShare:(id)a0 operation:(id)a1;

- (BOOL)isShare;
- (void)noteSideEffectRecordPendingDelete:(id)a0;
- (void)_fetchSharePCSData;
- (void)noteSideEffectRecordPendingModify:(id)a0;
- (void)clearProtectionDataForRecord;
- (id)sideEffectRecordIDs;
- (void)noteSideEffectRecordAbsent:(id)a0;
- (void)setServerRecord:(id)a0;
- (void)savePCSDataToCache;
- (void)fetchSharePCSData;
- (void)prepareForSave;
- (void)dealloc;
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)a0 zonePCSData:(id)a1;
- (id)_removePublicKey:(id)a0 fromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)_publicKeyForParticipant:(id)a0 error:(id *)a1;
- (id)_removePrivateParticipant:(id)a0 fromInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (BOOL)_serializePCSDataForShareWithError:(id *)a0;
- (BOOL)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)a0 error:(id)a1;
- (void)_addPublicKeyToSelfParticipant;
- (void)_alignParticipantPermissions;
- (BOOL)isCloudDocsContainer;
- (BOOL)_updateSharePublicPCSWithError:(id *)a0;
- (id)_handleSharePCSData:(id)a0 zonePCSData:(id)a1;
- (void)_setupParticipantsProtectionInfos;
- (id)_ensurePrivateParticipant:(id)a0 isInInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(id /* block */)a0;
- (struct _PCSPublicIdentityData { } *)createPublicIdentityFromPublicKeyForParticipant:(id)a0 error:(id *)a1;
- (BOOL)_cleanPublicPCSforShareWithError:(id *)a0;
- (unsigned long long)serviceType;
- (BOOL)_modifyRoleForParticipant:(id)a0 invitedPCS:(struct _OpaquePCSShareProtection { } *)a1 shareeIdentities:(id)a2 error:(id *)a3;
- (id)_createNewSharePCSDataWithError:(id *)a0;
- (unsigned long long)invitedPCSPermissionForParticipant:(id)a0;
- (BOOL)_addedPrivateParticipantNeedsAManateeInvitation:(id)a0;
- (void)updateParticipantsForFetchedShare:(id)a0 error:(id)a1;

@end
