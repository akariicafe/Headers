@class NSString, NSDictionary;

@interface NFRemoteAdminCardIngestionRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serverIdentifier;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *sessionToken;
@property (retain, nonatomic) NSDictionary *cardServiceInfo;
@property (nonatomic) unsigned long long maxDetectionTimeout;

+ (id)cardIngestionRequestWithServerIdentifier:(id)a0 sessionToken:(id)a1 readerModeMetadata:(id)a2 maxDetectionTimeout:(unsigned long long)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
