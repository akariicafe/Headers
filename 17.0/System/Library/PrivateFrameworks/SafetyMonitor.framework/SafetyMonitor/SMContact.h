@class NSUUID, NSString, NSData, NSDate, NSURL;

@interface SMContact : NSObject

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSData *allowReadToken;
@property (copy, nonatomic) NSData *safetyCacheKey;
@property (copy, nonatomic) NSDate *syncDate;
@property (copy, nonatomic) NSData *sharingInvitationData;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *participantID;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 sessionID:(id)a1 allowReadToken:(id)a2 safetyCacheKey:(id)a3 syncDate:(id)a4 sharingInvitationData:(id)a5 shareURL:(id)a6 participantID:(id)a7;

@end
