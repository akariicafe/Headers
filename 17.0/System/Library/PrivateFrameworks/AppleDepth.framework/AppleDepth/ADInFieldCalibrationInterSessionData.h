@class ADInterSessionFilter, ADInterSessionFilterParameters;

@interface ADInFieldCalibrationInterSessionData : NSObject {
    ADInterSessionFilterParameters *_isfParameters;
    ADInterSessionFilter *_isf;
}

@property (nonatomic) unsigned int version;

+ (id)interSessionDataFromFile:(id)a0;

- (id)init;
- (BOOL)reset;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)persistenceData;
- (long long)insertEntryAndCalculate:(id)a0 withWeight:(double)a1 toResult:(id *)a2;

@end
