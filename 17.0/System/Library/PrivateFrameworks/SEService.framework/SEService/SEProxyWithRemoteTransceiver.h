@class STSRemoteTransceiverProxy;

@interface SEProxyWithRemoteTransceiver : NSObject <SEProxyInterface> {
    STSRemoteTransceiverProxy *_remoteTransceiver;
}

- (void).cxx_destruct;
- (void)setRemoteTransceiver:(id)a0;
- (oneway void)transceive:(id)a0 callback:(id /* block */)a1;

@end
