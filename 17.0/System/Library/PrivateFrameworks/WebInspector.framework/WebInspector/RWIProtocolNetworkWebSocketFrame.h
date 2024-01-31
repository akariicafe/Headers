@class NSString;

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject

@property (nonatomic) double opcode;
@property (nonatomic) BOOL mask;
@property (copy, nonatomic) NSString *payloadData;
@property (nonatomic) double payloadLength;

- (id)initWithOpcode:(double)a0 mask:(BOOL)a1 payloadData:(id)a2 payloadLength:(double)a3;

@end
