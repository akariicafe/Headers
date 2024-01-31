@class BMSiriMusicInferenceTrainingIndependentSignals, NSArray, NSString;

@interface BMSiriMusic : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BMSiriMusicInferenceTrainingIndependentSignals *indepSignals;
@property (readonly, nonatomic) NSArray *depSignals;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_depSignalsJSONArray;
- (id)initWithIndepSignals:(id)a0 depSignals:(id)a1;

@end
