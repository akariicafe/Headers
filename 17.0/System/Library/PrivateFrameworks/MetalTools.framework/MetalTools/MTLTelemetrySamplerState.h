@class MTLSamplerDescriptor;

@interface MTLTelemetrySamplerState : MTLToolsSamplerState {
    BOOL isAniso;
}

@property (readonly, copy, nonatomic) MTLSamplerDescriptor *descriptor;

- (void)dealloc;
- (id)initWithBaseSamplerState:(id)a0 device:(id)a1 descriptor:(id)a2;
- (void)setSamplerStatsWithDescriptor:(id)a0 telemetryStat:(struct MTLTelemetrySamplerStatRec { unsigned int x0; struct MTLTelemetryStatisticUIRec { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned int x3; } x1; struct MTLTelemetryStatisticUIRec { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned int x3; } x2; struct MTLTelemetryStatisticUIRec { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned int x3; } x3; struct MTLTelemetryStatisticUIRec { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned int x3; } x4; struct MTLTelemetryStatisticFRec { float x0; float x1; float x2; unsigned int x3; } x5; struct MTLTelemetryStatisticFRec { float x0; float x1; float x2; unsigned int x3; } x6; struct MTLTelemetryStatisticUIRec { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned int x3; } x7; } *)a1;

@end
