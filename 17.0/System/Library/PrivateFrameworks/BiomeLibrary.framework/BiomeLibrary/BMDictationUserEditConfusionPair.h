@class NSArray, NSString;

@interface BMDictationUserEditConfusionPair : BMEventBase <BMStoreData>

@property (readonly, nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (readonly, nonatomic) NSArray *recognizedTokens;
@property (readonly, nonatomic) NSArray *correctedTokens;
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
- (id)_correctedTokensJSONArray;
- (id)_recognizedTokensJSONArray;
- (id)initWithIndex:(id)a0 recognizedTokens:(id)a1 correctedTokens:(id)a2;

@end
