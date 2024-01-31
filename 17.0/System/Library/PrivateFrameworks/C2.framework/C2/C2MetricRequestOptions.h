@class NSString, NSUUID, NSNumber, C2MetricOptions;

@interface C2MetricRequestOptions : NSObject

@property (nonatomic) unsigned char allowsCellularAccess;
@property (nonatomic) unsigned char _allowsExpensiveAccess;
@property (nonatomic) unsigned char _allowsPowerNapScheduling;
@property (retain, nonatomic) NSString *_sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *_sourceApplicationSecondaryIdentifier;
@property (nonatomic) NSNumber *privacyProxyFailClosedOverride;
@property (retain, nonatomic) NSUUID *metricUUID;
@property (retain, nonatomic) C2MetricOptions *metricOptions;

- (id)init;
- (id)metricRequestTransportOptions;
- (void).cxx_destruct;
- (id)initWithRequestOptions:(id)a0;

@end
