@interface ABAfibBurdenAnalyzer : NSObject {
    struct optional<beryllium::output_t> { union { char __null_state_; struct output_t { float Afib_burden; } __val_; } ; BOOL __engaged_; } _rawBurdenValue;
}

@property (nonatomic) unsigned char segmentsCount;
@property (nonatomic) unsigned char segmentsWith5TachCount;

+ (void)removeDiagnosticLogFiles;

- (id)init;
- (id).cxx_construct;
- (id)processResults:(void *)a0 withAlgsAnalytics:(struct core_analytics_t { float x0; float x1; double x2; double x3; } *)a1;
- (void)logToFileForTachoList:(id)a0 withBurdenResults:(id)a1;
- (id)determineBurdenForTachogramClassificationBuckets:(id)a0;

@end
