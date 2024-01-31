@interface ASProtocol16_1 : ASProtocol16_0

- (id)protocolVersion;
- (int)supportsUniqueServerId;
- (unsigned char)shortProtocolVersion;
- (BOOL)supportsForwarderTracking;
- (BOOL)supportsProposeNewTime;

@end
