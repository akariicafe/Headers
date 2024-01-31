@class BMTextUnderstandingPoemEntity, NSString;

@interface BMTextUnderstandingPoem : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BMTextUnderstandingPoemEntity *subject;
@property (readonly, nonatomic) int predicate;
@property (readonly, nonatomic) BMTextUnderstandingPoemEntity *object;
@property (readonly, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
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
- (id)initWithSubject:(id)a0 predicate:(int)a1 object:(id)a2 conversationId:(id)a3 confidence:(id)a4;

@end
