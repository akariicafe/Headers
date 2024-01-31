@class NetworkQualityValue, NSString, NSDictionary, NSDate, NSNumber, NSError;

@interface NetworkQualityResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDate *timestamp;
@property long long index;
@property (copy) NetworkQualityValue *downlinkCapacity;
@property (copy) NSNumber *downlinkBytesTransferred;
@property (copy) NSNumber *downlinkFlows;
@property (copy) NSString *interfaceName;
@property (copy) NetworkQualityValue *uplinkCapacity;
@property (copy) NSNumber *uplinkBytesTransferred;
@property (copy) NSNumber *uplinkFlows;
@property (copy) NetworkQualityValue *downlinkResponsiveness;
@property (copy) NSNumber *downlinkTCPResponsiveness;
@property (copy) NSNumber *downlinkTLSResponsiveness;
@property (copy) NSNumber *downlinkHTTPForeignResponsiveness;
@property (copy) NSNumber *downlinkHTTPSelfResponsiveness;
@property (copy) NetworkQualityValue *uplinkResponsiveness;
@property (copy) NSNumber *uplinkTCPResponsiveness;
@property (copy) NSNumber *uplinkTLSResponsiveness;
@property (copy) NSNumber *uplinkHTTPForeignResponsiveness;
@property (copy) NSNumber *uplinkHTTPSelfResponsiveness;
@property (copy) NSDictionary *workingLatencyValues;
@property (copy) NetworkQualityValue *latency;
@property (copy) NSNumber *tcpLatency;
@property (copy) NSNumber *tlsLatency;
@property (copy) NSNumber *httpLatency;
@property (copy) NSDictionary *idleLatencyValues;
@property (copy) NSDictionary *urlSessionMetrics;
@property (copy) NSString *testEndpoint;
@property (copy) NSString *osVersion;
@property (copy) NSError *error;
@property BOOL proxied;
@property (copy) NSString *appProtocol;

+ (long long)ratingForResponsivenessScore:(long long)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalizeResult;

@end
