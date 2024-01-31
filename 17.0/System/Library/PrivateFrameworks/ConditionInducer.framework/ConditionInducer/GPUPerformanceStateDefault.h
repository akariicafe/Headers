@class ApplePMPPerfStateControl;
@protocol AGXConsistentStateDevice;

@interface GPUPerformanceStateDefault : COCondition {
    id<AGXConsistentStateDevice> _consistentDevice;
    unsigned int _acceleratorService;
    unsigned int _connection;
    unsigned int _performanceLevel;
    ApplePMPPerfStateControl *_applePMPPerfStateControl;
}

@property (nonatomic) unsigned int desiredGPUPerformanceState;

+ (id)description;
+ (id)consistentStateDevice;
+ (unsigned int)ioAccelerator;
+ (id)perfLevelEnumToGPUStateStringKey:(unsigned int)a0;
+ (id)profileFriendlyName;
+ (BOOL)supportsConsistentStateDevice:(id)a0;

- (BOOL)isDestructive;
- (void)_cleanup;
- (BOOL)setUp;
- (void)tearDown;
- (BOOL)_acquireLock;
- (BOOL)active;
- (void).cxx_destruct;
- (id)identifierName;
- (void)_dumpCurrentState:(id)a0;
- (BOOL)_setConsistentPerformanceLevel;
- (id)initWithGPUPerformanceState:(unsigned int)a0;
- (BOOL)isInternalOnly;
- (id)userFriendlyName;

@end
