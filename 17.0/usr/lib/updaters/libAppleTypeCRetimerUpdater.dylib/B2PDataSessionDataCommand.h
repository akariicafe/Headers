@class NSData;

@interface B2PDataSessionDataCommand : B2PCommand

@property unsigned char sessionID;
@property int status;
@property (copy) NSData *sessionData;

- (id)data;
- (id)description;
- (void).cxx_destruct;
- (BOOL)parseCommand:(id)a0;
- (id)initWithSessionID:(unsigned char)a0 status:(int)a1 data:(id)a2;

@end
