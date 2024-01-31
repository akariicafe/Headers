@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketResponse : RWIProtocolJSONObject

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *statusText;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;

- (id)initWithStatus:(int)a0 statusText:(id)a1 headers:(id)a2;

@end
