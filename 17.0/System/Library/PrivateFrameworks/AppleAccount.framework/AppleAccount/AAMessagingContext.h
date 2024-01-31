@class NSString, AAMessagingDestination, IDSMessageContext;

@interface AAMessagingContext : NSObject {
    IDSMessageContext *_context;
}

@property (readonly, nonatomic) NSString *outgoingResponseIdentifier;
@property (readonly, nonatomic) NSString *incomingResponseIdentifier;
@property (readonly, nonatomic) NSString *senderCorrelationIdentifier;
@property (readonly, nonatomic) AAMessagingDestination *fromID;
@property (readonly, nonatomic) AAMessagingDestination *toID;
@property (readonly, nonatomic) BOOL expectsPeerResponse;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
