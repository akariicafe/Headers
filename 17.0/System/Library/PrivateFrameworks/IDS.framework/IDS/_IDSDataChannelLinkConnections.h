@class _IDSDataChannelLinkConnection;

@interface _IDSDataChannelLinkConnections : NSObject

@property (retain) _IDSDataChannelLinkConnection *udp;
@property (retain) _IDSDataChannelLinkConnection *qpod;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isQUICPod;

@end
