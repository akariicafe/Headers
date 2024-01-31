@class NSArray, NSString, BMHumanUnderstandingPersonalInferenceFact;

@interface BMHumanUnderstandingPersonalInference : BMEventBase <BMStoreData>

@property (readonly, nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BMHumanUnderstandingPersonalInferenceFact *fact;
@property (readonly, nonatomic) NSArray *qualifiers;
@property (readonly, nonatomic) unsigned int modelVersion;
@property (nonatomic) BOOL hasModelVersion;
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
- (id)_qualifiersJSONArray;
- (id)initWithConfidence:(id)a0 fact:(id)a1 qualifiers:(id)a2 modelVersion:(id)a3;

@end
