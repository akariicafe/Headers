@class NSString, SKHandle;

@interface SKAOutgoingInvitationState : NSObject

@property (retain, nonatomic) SKHandle *toHandle;
@property (retain, nonatomic) SKHandle *fromHandle;
@property (retain, nonatomic) NSString *channelIdentifier;

- (void).cxx_destruct;
- (id)initWithToHandle:(id)a0 fromHandle:(id)a1 channelIdentifier:(id)a2;

@end
