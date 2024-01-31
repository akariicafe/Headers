@class NSURL, CKDeviceToDeviceShareInvitationToken, NSDictionary;

@interface HMDCoreDataCloudShareInvitation : NSObject

@property (readonly) NSURL *url;
@property (readonly) CKDeviceToDeviceShareInvitationToken *token;
@property (readonly, copy) NSDictionary *content;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 token:(id)a1;

@end
