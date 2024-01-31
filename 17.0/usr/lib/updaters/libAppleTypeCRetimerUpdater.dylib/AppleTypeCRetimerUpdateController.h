@class NSMutableArray, ATCRTAPHardwareID;

@interface AppleTypeCRetimerUpdateController : AppleTypeCRetimerUpdaterHelper {
    BOOL _singleStepMode;
    unsigned long long _updaterIndex;
    NSMutableArray *_updaterInstances;
    BOOL _aggregateUpdateComplete;
    BOOL _skipSameVersion;
    ATCRTAPHardwareID *_apHardwareID;
    unsigned long long _debugFlags;
}

@property (readonly) BOOL isDone;

- (void).cxx_destruct;
- (void)performReset;
- (id)queryInfo;
- (BOOL)initDebugFlags:(id)a0;
- (BOOL)isDoneAggregate;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2 forcingPower:(BOOL)a3;
- (BOOL)initializeUpdaterInstancesForcingPower:(BOOL)a0;
- (BOOL)isDoneSingleStep;
- (BOOL)performUpdateWithDictionary:(id)a0;
- (BOOL)performUpdateWithDictionaryAggregate:(id)a0;
- (BOOL)performUpdateWithDictionarySingleStep:(id)a0;
- (id)queryInfoAggregate;
- (id)queryInfoSingleStep;
- (BOOL)shouldSkipSameVersion:(id)a0;

@end
