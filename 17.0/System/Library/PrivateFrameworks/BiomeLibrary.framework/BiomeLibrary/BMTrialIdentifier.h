@class NSString;

@interface BMTrialIdentifier : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *trialNamespace;
@property (readonly, nonatomic) NSString *task;
@property (readonly, nonatomic) NSString *treatment;
@property (readonly, nonatomic) NSString *deployment;
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
- (id)initWithTrialNamespace:(id)a0 task:(id)a1 treatment:(id)a2 deployment:(id)a3;

@end
