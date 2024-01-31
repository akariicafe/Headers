@interface MRIDSClientConnection : MRProtocolClientConnection

@property (nonatomic) unsigned int discoveryMode;

- (id)initWithConnection:(id)a0 queue:(id)a1;

@end
