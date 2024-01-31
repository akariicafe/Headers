@class NSArray, NSString;

@interface BMDisplayAlwaysOn : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int userSetState;
@property (readonly, nonatomic) int resolvedState;
@property (readonly, nonatomic) NSArray *blockingPolicies;
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
- (id)_blockingPoliciesJSONArray;
- (id)initWithUserSetState:(int)a0 resolvedState:(int)a1 blockingPolicies:(id)a2;

@end
