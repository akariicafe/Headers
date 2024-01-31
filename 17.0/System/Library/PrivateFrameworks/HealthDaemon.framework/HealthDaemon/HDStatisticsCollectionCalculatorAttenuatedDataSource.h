@class HDQuantitySampleAttenuationEngine, HDQuantitySampleAttenuationProvider;

@interface HDStatisticsCollectionCalculatorAttenuatedDataSource : HDStatisticsCollectionCalculatorDefaultDataSource

@property (readonly, nonatomic) HDQuantitySampleAttenuationProvider *attenuationProvider;
@property (readonly, nonatomic) HDQuantitySampleAttenuationEngine *attenuationEngine;
@property (nonatomic) struct deque<HDQuantitySampleAttenuationEngineSample, std::allocator<HDQuantitySampleAttenuationEngineSample>> { struct __split_buffer<HDQuantitySampleAttenuationEngineSample *, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct **__first_; struct **__begin_; struct **__end_; struct __compressed_pair<HDQuantitySampleAttenuationEngineSample **, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<HDQuantitySampleAttenuationEngineSample>> { unsigned long long __value_; } __size_; } attenuationSamplesWindow;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendToAttenuationSamplesWindowUsingSourceSample:(struct { double x0; double x1; double x2; BOOL x3; long long x4; })a0 attenuatedSample:(struct { double x0; double x1; double x2; BOOL x3; long long x4; })a1;
- (void)_attenuationSamplesWindowAdvanceToSample:(struct { double x0; double x1; double x2; BOOL x3; long long x4; })a0;
- (BOOL)_attenuationSamplesWindowContainsSample:(struct { double x0; double x1; double x2; BOOL x3; long long x4; })a0;
- (BOOL)_attenuationSamplesWindowContainsSampleStart:(struct { double x0; double x1; double x2; BOOL x3; long long x4; })a0;
- (struct queue<HDQuantitySampleAttenuationEngineSample, std::deque<HDQuantitySampleAttenuationEngineSample>> { struct deque<HDQuantitySampleAttenuationEngineSample, std::allocator<HDQuantitySampleAttenuationEngineSample>> { struct __split_buffer<HDQuantitySampleAttenuationEngineSample *, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct **x0; struct **x1; struct **x2; struct __compressed_pair<HDQuantitySampleAttenuationEngineSample **, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::allocator<HDQuantitySampleAttenuationEngineSample>> { unsigned long long x0; } x2; } x0; })_extractAttenuatedSamplesFrom:(struct { double x0; double x1; double x2; BOOL x3; long long x4; })a0;
- (BOOL)collectionCalculator:(id)a0 queryForInterval:(id)a1 error:(id *)a2 sampleHandler:(id /* block */)a3 mergeHandler:(id /* block */)a4;
- (id)initForProfile:(id)a0 quantityType:(id)a1 predicate:(id)a2 restrictedSourceEntities:(id)a3 attenuationType:(id)a4;

@end
