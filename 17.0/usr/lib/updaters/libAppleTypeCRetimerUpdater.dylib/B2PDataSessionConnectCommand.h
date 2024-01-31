@interface B2PDataSessionConnectCommand : B2PCommand

@property unsigned char sessionID;
@property int state;

- (id)data;
- (id)description;
- (id)initWithOpCode:(unsigned short)a0 route:(unsigned char)a1 data:(id)a2;
- (id)initWithSessionID:(unsigned char)a0 state:(int)a1;

@end
