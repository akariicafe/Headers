@class NSString, CKContainerID, NSError, NSNumber;

@interface SFCollaborationCloudSharingMailResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *subject;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) NSNumber *canEdit;
@property (readonly, nonatomic) NSNumber *allowOthersToInvite;
@property (readonly, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSubject:(id)a0 body:(id)a1 containerID:(id)a2 canEdit:(id)a3 allowOthersToInvite:(id)a4 error:(id)a5;

@end
