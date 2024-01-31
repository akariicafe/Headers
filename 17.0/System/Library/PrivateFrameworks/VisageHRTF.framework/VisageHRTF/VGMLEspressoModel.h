@class NSString, NSMutableArray;

@interface VGMLEspressoModel : NSObject {
    NSMutableArray *_inputLayerNames;
    NSMutableArray *_outputLayerNames;
    NSMutableArray *_inputBuffers;
    NSMutableArray *_outputBuffers;
    void *_plan;
    struct { void *plan; int network_index; } _network;
    int _storageFormat;
    void *_context;
    int _engine;
    int _plan_flags;
}

@property (readonly, nonatomic) unsigned long long numInputs;
@property (readonly, nonatomic) unsigned long long numOutputs;
@property (readonly, nonatomic) NSString *networkFilePath;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithModelPath:(id)a0;
- (id)initWithModelInfo:(id)a0;
- (unsigned long long)getInputSize;
- (const unsigned long long *)getInputDimensions:(unsigned long long)a0;
- (const unsigned long long *)getOutputDimensions:(unsigned long long)a0;
- (unsigned long long)getOutputSize;
- (id)inferInputs:(id)a0;
- (void)inferInputs:(id)a0 toOutputs:(id)a1;
- (void)inferModel;

@end
