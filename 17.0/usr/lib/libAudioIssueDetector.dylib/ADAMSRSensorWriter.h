@class SRSensorWriter;

@interface ADAMSRSensorWriter : NSObject {
    SRSensorWriter *_writer;
}

@property (readonly, nonatomic) BOOL isValidSRSensorWriterPresent;
@property (readonly, nonatomic) BOOL isMonitoring;
@property (readonly, nonatomic) BOOL isBundleIdentifierEligible;

- (void).cxx_destruct;
- (id)initWithSensorType:(int)a0 bundleIdentifier:(id)a1;
- (BOOL)provideSample:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;

@end
