@class NSString, AVOutputContextCommunicationChannel;

@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl> {
    struct OpaqueFigRoutingContext { } *_routingContext;
}

@property (readonly, nonatomic) struct __CFString { } *commChannelUUID;
@property (weak) AVOutputContextCommunicationChannel *parentCommunicationChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 commChannelUUID:(struct __CFString { } *)a1;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;

@end
