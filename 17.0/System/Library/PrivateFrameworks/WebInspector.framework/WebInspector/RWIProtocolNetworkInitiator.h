@class NSString, RWIProtocolConsoleStackTrace;

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (retain, nonatomic) RWIProtocolConsoleStackTrace *stackTrace;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) double lineNumber;
@property (nonatomic) int nodeId;

- (id)initWithType:(long long)a0;

@end
