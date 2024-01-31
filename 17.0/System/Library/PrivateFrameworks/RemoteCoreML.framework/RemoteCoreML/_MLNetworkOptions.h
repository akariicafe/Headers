@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (BOOL)useAWDL;
- (const char *)localPort;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (unsigned long long)family;
- (const char *)port;
- (const char *)psk;
- (BOOL)useTLS;
- (const char *)localAddr;
- (const char *)networkNameIdentifier;
- (long long)receiveTimeoutValue;
- (BOOL)useBonjour;
- (BOOL)useUDP;

@end
