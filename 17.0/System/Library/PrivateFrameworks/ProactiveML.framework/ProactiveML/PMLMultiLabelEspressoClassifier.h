@class NSString;

@interface PMLMultiLabelEspressoClassifier : NSObject <PMLMultiLabelClassifierProtocol> {
    struct { void *plan; int network_index; } _espressoModel;
    void *_espressoPlan;
    void *_espressoContext;
    unsigned long long _outputNumReplyClasses;
    unsigned long long _inputNumParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classifierWithEspressoModelFile:(id)a0;
+ (unsigned long long)getNumParametersFromShape:(unsigned long long[10])a0 rank:(unsigned long long)a1;
+ (id)makeStringForShape:(unsigned long long[10])a0;

@end
