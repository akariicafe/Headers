@class NSString, NSArray;

@interface BMHumanUnderstandingPersonalInferenceFact : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *subjectID;
@property (readonly, nonatomic) NSString *subjectAlias;
@property (readonly, nonatomic) NSArray *subjectIsa;
@property (readonly, nonatomic) NSString *predicateID;
@property (readonly, nonatomic) NSString *objectID;
@property (readonly, nonatomic) NSString *objectAlias;
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
- (id)_subjectIsaJSONArray;
- (id)initWithSubjectID:(id)a0 subjectAlias:(id)a1 subjectIsa:(id)a2 predicateID:(id)a3 objectID:(id)a4 objectAlias:(id)a5;

@end
