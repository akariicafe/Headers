@interface B2PDataSessionConnectResponse : B2PResponse

@property (readonly) int sessionID;
@property (readonly) int state;

- (id)description;
- (BOOL)parseResponse:(id)a0;

@end
