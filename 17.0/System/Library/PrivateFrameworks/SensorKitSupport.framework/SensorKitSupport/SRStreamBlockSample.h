@class NSDictionary, _TtC16SensorKitSupport13SRStreamBlock, NSString;

@interface SRStreamBlockSample : NSObject <SRSampling, SRSampleExporting, SRSampleDirectExporting>

@property (retain, nonatomic) _TtC16SensorKitSupport13SRStreamBlock *streamBlock;
@property (retain, nonatomic) NSDictionary *sampleDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_dictionaryRepresentation;
- (BOOL)sr_prefersUTF8StringRepresentation;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)a0;

@end
