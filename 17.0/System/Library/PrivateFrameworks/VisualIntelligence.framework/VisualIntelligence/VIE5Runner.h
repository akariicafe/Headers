@class NSString, NSDictionary, NSURL, NSArray;

@interface VIE5Runner : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_outputPorts;
    NSDictionary *_inputPorts;
    struct e5rt_execution_stream_operation { } *_mainESOP;
    struct e5rt_execution_stream { } *_stream;
    BOOL _allocateInputs;
    BOOL _allocateOutputs;
}

@property (readonly, nonatomic) NSDictionary *inputs;
@property (readonly, nonatomic) NSDictionary *outputs;
@property (readonly, nonatomic) NSDictionary *boundInputs;
@property (readonly, nonatomic) NSDictionary *boundOutputs;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *mainFunctionName;
@property (readonly, nonatomic) NSArray *inputNames;
@property (readonly, nonatomic) NSArray *outputNames;

+ (int)allocatePort:(struct e5rt_io_port { } *)a0 description:(id)a1 io:(id *)a2;
+ (int)getPort:(struct e5rt_io_port { } *)a0 description:(id *)a1;
+ (void)releasePorts:(id)a0 descriptions:(id)a1 boundedIOs:(id)a2 wasBound:(BOOL)a3;
+ (int)surfaceTypeE5rtType:(int)a0 toVIType:(unsigned long long *)a1;
+ (int)tensorDTypeE5rtType:(int)a0 toVIType:(unsigned long long *)a1;

- (void)dealloc;
- (int)execute;
- (void).cxx_destruct;
- (void)releaseNetworks;
- (int)compileNetworksOnDevice;
- (id)executeAndGet:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)getInputImageBuffer:(id)a0;
- (int)initNetworks;
- (id)initWithBundleURL:(id)a0 mainFunctionName:(id)a1;
- (int)loadPrecompiledNetwork;

@end
