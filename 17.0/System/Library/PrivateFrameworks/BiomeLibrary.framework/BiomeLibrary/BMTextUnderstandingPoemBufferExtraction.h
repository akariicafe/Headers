@class NSString;

@interface BMTextUnderstandingPoemBufferExtraction : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) BOOL isCoref;
@property (nonatomic) BOOL hasIsCoref;
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
- (id)initWithType:(int)a0 text:(id)a1 identifier:(id)a2 confidenceScore:(id)a3 contactIdentifier:(id)a4 role:(int)a5 isCoref:(id)a6;

@end
