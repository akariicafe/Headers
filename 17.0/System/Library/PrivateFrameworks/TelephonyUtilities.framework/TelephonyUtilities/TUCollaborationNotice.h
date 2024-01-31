@class NSUUID, NSString, SWCollaborationHighlight;

@interface TUCollaborationNotice : NSObject <TUConversationNoticeProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SWCollaborationHighlight *collaboration;
@property (readonly, nonatomic) NSUUID *UUID;
@property (nonatomic) long long sessionEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCollaborationNotice:(id)a0;

@end
