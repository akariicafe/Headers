@class HMHome, NSString, HMUser, NSURL, CKDeviceToDeviceShareInvitationToken;

@interface HMUserCloudShareInvitation : NSObject

@property (readonly) NSURL *shareURL;
@property (readonly) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (readonly) NSString *containerID;
@property (readonly) HMHome *home;
@property (readonly) HMUser *user;
@property (readonly) HMUser *fromUser;

- (void).cxx_destruct;
- (id)initWithUser:(id)a0 URL:(id)a1 shareToken:(id)a2 containerID:(id)a3 forHome:(id)a4 fromUser:(id)a5;

@end
