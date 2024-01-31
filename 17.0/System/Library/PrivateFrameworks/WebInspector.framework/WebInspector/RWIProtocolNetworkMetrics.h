@class NSString, RWIProtocolNetworkHeaders, RWIProtocolSecurityConnection;

@interface RWIProtocolNetworkMetrics : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *protocol;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *connectionIdentifier;
@property (copy, nonatomic) NSString *remoteAddress;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property (nonatomic) double requestHeaderBytesSent;
@property (nonatomic) double requestBodyBytesSent;
@property (nonatomic) double responseHeaderBytesReceived;
@property (nonatomic) double responseBodyBytesReceived;
@property (nonatomic) double responseBodyDecodedSize;
@property (retain, nonatomic) RWIProtocolSecurityConnection *securityConnection;
@property (nonatomic) BOOL isProxyConnection;

@end
