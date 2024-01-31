@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction

@property (retain) SASProximityHandshake *handshake;

+ (unsigned long long)actionID;

- (id)init;
- (BOOL)hasResponse;
- (void).cxx_destruct;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
