@class NSData, ADJasperColorInFieldCalibrationTelemetryData;

@interface ADJasperColorInFieldCalibrationInterSessionData : ADInFieldCalibrationInterSessionData {
    struct vector<ADJasperColorInFieldCalibrationDiagnosticPipelineEntry, std::allocator<ADJasperColorInFieldCalibrationDiagnosticPipelineEntry>> { struct ADJasperColorInFieldCalibrationDiagnosticPipelineEntry *__begin_; struct ADJasperColorInFieldCalibrationDiagnosticPipelineEntry *__end_; struct __compressed_pair<ADJasperColorInFieldCalibrationDiagnosticPipelineEntry *, std::allocator<ADJasperColorInFieldCalibrationDiagnosticPipelineEntry>> { struct ADJasperColorInFieldCalibrationDiagnosticPipelineEntry *__value_; } __end_cap_; } _diagnosticPipelineLog;
    unsigned long long _diagnosticPipelineLogIndex;
}

@property (retain, nonatomic) NSData *intersessionFeaturesHistory;
@property (nonatomic) unsigned int intersessionFeaturesHistoryCount;
@property (nonatomic) unsigned int successfulResultCount;
@property (retain, nonatomic) ADJasperColorInFieldCalibrationTelemetryData *inFieldCalibrationTelemetryData;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ jasperToColorRotationAngles;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)persistenceData;
- (void)initIsf;
- (void /* unknown type, empty encoding */)convertDictToExtrinsicsAngles:(id)a0;
- (id)convertExtrinsicsAnglesToDict:(SEL)a0;
- (void)initDiagnosticPipelineLogWithFlowType:(int)a0;
- (void)initIsfWithFlowType:(int)a0;
- (id)initWithDictionaryRepresentation:(id)a0 andDeviceName:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 andFlowType:(int)a1;
- (id)initWithFactoryJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithFactoryJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 andDeviceName:(id)a2;
- (id)initWithFactoryJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 andFlowType:(int)a2;
- (BOOL)insertEntryToDiagnosticPipelineLog:(struct ADJasperColorInFieldCalibrationDiagnosticPipelineEntry { unsigned int x0; char x1; unsigned char x2; unsigned char x3; float x4; float x5; float x6; float x7; float x8[5][3]; float x9[5][3]; unsigned char x10[5]; char x11; char x12; })a0;
- (unsigned int)isfCapacity;

@end
