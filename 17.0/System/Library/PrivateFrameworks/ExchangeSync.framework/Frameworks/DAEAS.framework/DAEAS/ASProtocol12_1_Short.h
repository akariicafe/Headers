@interface ASProtocol12_1_Short : ASProtocol12_1

- (BOOL)commandStringNeedsSaveInSent;
- (BOOL)headerNeedsPolicyKey;
- (BOOL)headerNeedsProtocolVersion;
- (BOOL)headerNeedsUserAgent;
- (id)requestURLStringWithTask:(id)a0;
- (unsigned char)shortProtocolVersion;

@end
