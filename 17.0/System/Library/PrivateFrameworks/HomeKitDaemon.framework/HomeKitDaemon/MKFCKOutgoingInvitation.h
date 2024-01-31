@class MKFCKHome, NSString, NSUUID, MKFCKUser, NSDate, CKDeviceToDeviceShareInvitationToken;

@interface MKFCKOutgoingInvitation : MKFCKHomeObject

@property (copy, nonatomic) NSString *accessCode;
@property (nonatomic) long long announceAccessLevel;
@property (nonatomic) long long cameraAccessLevel;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (nonatomic) long long invitationState;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSUUID *modelID;
@property (nonatomic) long long privilege;
@property (nonatomic) BOOL remoteAccessAllowed;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKUser *pendingUser;

+ (id)fetchRequest;

- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
