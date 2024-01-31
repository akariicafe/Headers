@class NSString, Protocol;

@interface DTXProxyRequestHandler : NSObject

@property (readonly, copy) NSString *channelIdentifier;
@property (readonly) Protocol *publishedProtocol;
@property (readonly, copy) NSString *publishedProtocolName;
@property (readonly) Protocol *peerProtocol;
@property (readonly, copy) NSString *peerProtocolName;
@property (readonly, copy) id /* block */ handlerBlock;

- (void).cxx_destruct;
- (id)initWithPublishedProtocol:(id)a0 publishedProtocolName:(id)a1 peerProtocol:(id)a2 peerProtocolName:(id)a3 handlerBlock:(id /* block */)a4;
- (BOOL)matchesPublishedProtocolName:(id)a0 peerProtocolName:(id)a1;

@end
