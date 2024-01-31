@class ADPearlColorInFieldCalibrationTelemetryData;

@interface ADPearlColorInFieldCalibrationInterSessionData : ADInFieldCalibrationInterSessionData {
    struct vector<ADPearlColorInFieldCalibrationDiagnosticPipelineEntry, std::allocator<ADPearlColorInFieldCalibrationDiagnosticPipelineEntry>> { struct ADPearlColorInFieldCalibrationDiagnosticPipelineEntry *__begin_; struct ADPearlColorInFieldCalibrationDiagnosticPipelineEntry *__end_; struct __compressed_pair<ADPearlColorInFieldCalibrationDiagnosticPipelineEntry *, std::allocator<ADPearlColorInFieldCalibrationDiagnosticPipelineEntry>> { struct ADPearlColorInFieldCalibrationDiagnosticPipelineEntry *__value_; } __end_cap_; } _diagnosticPipelineLog;
    unsigned long long _diagnosticPipelineLogIndex;
}

@property (retain, nonatomic) ADPearlColorInFieldCalibrationTelemetryData *inFieldCalibrationTelemetryData;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ pearlToColorRotationAngles;

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
- (id)initWithFactoryPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithFactoryPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 andDeviceName:(id)a2;
- (id)initWithFactoryPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 andFlowType:(int)a2;
- (BOOL)insertEntryToDiagnosticPipelineLog:(struct ADPearlColorInFieldCalibrationDiagnosticPipelineEntry { unsigned int x0; char x1; char x2; unsigned char x3; unsigned char x4; float x5; float x6; float x7; float x8; float x9[3]; float x10[3]; unsigned char x11; char x12; char x13; char x14; char x15; })a0;

@end
