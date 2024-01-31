@class NSString;

@interface BMIntelligencePlatformEntityTaggingPersonInference : BMEventBase <BMStoreData>

@property (readonly, nonatomic) unsigned long long entityIdentifier;
@property (nonatomic) BOOL hasEntityIdentifier;
@property (readonly, nonatomic) int entityTagID;
@property (readonly, nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSString *feedbackEventID;
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
- (id)initWithEntityIdentifier:(id)a0 entityTagID:(int)a1 score:(id)a2 feedbackEventID:(id)a3;

@end
