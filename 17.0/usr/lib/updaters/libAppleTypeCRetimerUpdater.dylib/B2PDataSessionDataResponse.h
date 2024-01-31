@class NSData;

@interface B2PDataSessionDataResponse : B2PResponse

@property (readonly) unsigned char sessionID;
@property (readonly) int dataSessionStatus;
@property (readonly) NSData *sessionData;

- (id)data;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRoute:(unsigned char)a0 status:(int)a1 sessionID:(unsigned char)a2 dataSessionStatus:(int)a3 data:(id)a4;
- (BOOL)parseResponse:(id)a0;

@end
