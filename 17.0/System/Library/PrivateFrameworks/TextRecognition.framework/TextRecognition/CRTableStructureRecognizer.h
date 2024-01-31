@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface CRTableStructureRecognizer : NSObject {
    struct unique_ptr<CoreRecognition::EspressoModelWrapper, std::default_delete<CoreRecognition::EspressoModelWrapper>> { struct __compressed_pair<CoreRecognition::EspressoModelWrapper *, std::default_delete<CoreRecognition::EspressoModelWrapper>> { struct EspressoModelWrapper *__value_; } __ptr_; } _encoderModel;
    struct unique_ptr<CoreRecognition::EspressoModelWrapper, std::default_delete<CoreRecognition::EspressoModelWrapper>> { struct __compressed_pair<CoreRecognition::EspressoModelWrapper *, std::default_delete<CoreRecognition::EspressoModelWrapper>> { struct EspressoModelWrapper *__value_; } __ptr_; } _decoderModel;
    BOOL _modelsLoaded;
    unsigned long long _codemapSize;
    long long _maxNumberOfInputRegions;
    NSArray *_modelConfigurationsNumRegions;
    NSString *_modelSmallestConfig;
    NSObject<OS_dispatch_queue> *_queue;
    long long _inferenceCount;
    unsigned long long _noTableIndex;
    unsigned long long _eopIndex;
    unsigned long long _rowsIndex;
    unsigned long long _colsIndex;
    unsigned long long _mergeIndex;
    unsigned long long _lowestNumberIndex;
    unsigned long long _highestNumberIndex;
    unsigned long long _highestBinIndex;
    NSString *_encoderName;
    NSString *_decoderName;
    unsigned long long _computeDeviceType;
    id<MTLDevice> _metalDevice;
}

@property (readonly, nonatomic) NSArray *codemap;

+ (id)URLOfModelName:(id)a0;
+ (id)defaultDecoderModelName;
+ (id)defaultEncoderModelName;
+ (id)loadCodemap;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)loadModels;
- (BOOL)preheatWithError:(id *)a0;
- (id)alignResult:(struct CRTableStructureRecognizerResultParsed { unsigned long long x0; unsigned long long x1; BOOL x2; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x3; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x4; struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge *x0; struct CRTableStructureMerge *x1; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge *x0; } x2; } x5; })a0 lines:(id)a1 lineIndexMap:(struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; })a2;
- (id)_recognizeTableStructureBlock:(void *)a0 numConfigurationRegions:(long long)a1;
- (struct CRTableStructureRecognizerInputFeatures { struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x2; })extractFeaturesFromImage:(id)a0 numConfigurationRegions:(long long)a1 lines:(id)a2;
- (long long)getConfigurationNumRegions:(long long)a0;
- (id)getConfigurationStringForNumRegions:(long long)a0;
- (int)getEncoderEngine:(unsigned long long)a0;
- (id)initWithComputeDeviceType:(unsigned long long)a0 metalDevice:(id)a1;
- (id)initWithEncoderName:(id)a0 decoderName:(id)a1 computeDeviceType:(unsigned long long)a2 metalDevice:(id)a3;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })normalizedLineRegions:(id)a0 numConfigurationRegions:(long long)a1 usingMinMaxNorm:(BOOL)a2;
- (struct CRTableStructureRecognizerResultParsed { unsigned long long x0; unsigned long long x1; BOOL x2; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x3; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x4; struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge *x0; struct CRTableStructureMerge *x1; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge *x0; } x2; } x5; })parseResult:(id)a0;
- (struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; })readBinValuesStartingAtIndex:(int *)a0 tokenIndexes:(struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; })a1;
- (id)recognizeDetectedTableInRegion:(id)a0 filteredResults:(id)a1 tableIndex:(unsigned long long)a2 image:(id)a3;
- (id)recognizeTableStructure:(void *)a0 numConfigurationRegions:(long long)a1;
- (void)reduceMemoryByResizing;
- (id)tableGroupRegionFromResult:(id)a0 recognizedLines:(id)a1;

@end
