@class NSData, NSString;

@interface HAFacialMetricsExporter : NSObject <SRSampling, SRSampleExporting>

@property (readonly, nonatomic) NSData *packet;
@property (readonly, nonatomic) unsigned int packetType;
@property (readonly, nonatomic) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_dictionaryRepresentation;

@end
