@class NWEndpoint;

@interface NEAppProxyTCPFlow : NEAppProxyFlow

@property (readonly) NWEndpoint *remoteEndpoint;

- (id)description;
- (void).cxx_destruct;
- (id)initWithNEFlow:(struct _NEFlow { } *)a0 queue:(id)a1;
- (void)readDataWithCompletionHandler:(id /* block */)a0;
- (void)writeData:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
