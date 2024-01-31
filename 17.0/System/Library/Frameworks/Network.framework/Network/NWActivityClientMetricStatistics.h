@class NSUUID, NSString, NSDictionary, NSData;

@interface NWActivityClientMetricStatistics : NSObject

@property (nonatomic) struct nw_activity_client_metric_report_s { unsigned char activity_uuid[16]; char client_metric_name[256]; char client_metric[5000]; unsigned char __pad[0]; } report;
@property (retain, nonatomic) NSUUID *activityUUID;
@property (retain, nonatomic) NSString *clientMetricName;
@property (retain, nonatomic) NSString *clientMetricString;
@property (retain, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSData *metricData;
@property (retain, nonatomic) NSUUID *externallyVisibleActivityUUID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDictionary *clientMetric;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNWActivityClientMetricReport:(struct nw_activity_client_metric_report_s { unsigned char x0[16]; char x1[256]; char x2[5000]; unsigned char x3[0]; } *)a0 length:(unsigned long long)a1;

@end
