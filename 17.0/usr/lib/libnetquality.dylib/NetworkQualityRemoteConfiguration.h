@class NSString, NSDictionary, NetworkQualityConfiguration;

@interface NetworkQualityRemoteConfiguration : NSObject {
    NSDictionary *_urls;
    NetworkQualityConfiguration *_config;
    NSString *_port;
}

@property (retain, nonatomic) NSString *testEndpoint;

- (void).cxx_destruct;
- (id)portForURLType:(int)a0;
- (id)URLForURLType:(int)a0;
- (id)initWithData:(id)a0 andConfig:(id)a1;
- (id)initWithDictionary:(id)a0 andConfig:(id)a1;
- (id)testEndpoint:(int)a0;

@end
