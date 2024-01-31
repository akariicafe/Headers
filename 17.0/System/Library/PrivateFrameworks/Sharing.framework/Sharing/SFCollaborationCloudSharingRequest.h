@class NSUUID, NSString, NSArray, NSURL, NSData, CKContainerSetupInfo, CKShare, NSNumber;

@interface SFCollaborationCloudSharingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *collaborationItemIdentifier;
@property (readonly, copy, nonatomic) NSArray *options;
@property (readonly, nonatomic) NSURL *fileOrFolderURL;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKContainerSetupInfo *setupInfo;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSNumber *accessType;
@property (readonly, nonatomic) NSNumber *permissionType;
@property (readonly, nonatomic) NSNumber *allowOthersToInvite;
@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSData *appIconData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCollaborationItemIdentifier:(id)a0 options:(id)a1 fileOrFolderURL:(id)a2 share:(id)a3 setupInfo:(id)a4 activityType:(id)a5;
- (id)initWithCollaborationItemIdentifier:(id)a0 options:(id)a1 fileOrFolderURL:(id)a2 share:(id)a3 setupInfo:(id)a4 phoneNumbers:(id)a5 emailAddresses:(id)a6 activityType:(id)a7 appName:(id)a8 appIconData:(id)a9;

@end
