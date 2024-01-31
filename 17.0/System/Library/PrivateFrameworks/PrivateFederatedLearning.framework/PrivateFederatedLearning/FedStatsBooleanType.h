@class NSString;

@interface FedStatsBooleanType : NSObject <FedStatsDataTypeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFromDict:(id)a0 possibleError:(id *)a1;

- (long long)dataType;
- (id)init;
- (unsigned long long)classCount;
- (id)sampleForIndex:(unsigned long long)a0;
- (id)decodeFromIndex:(id)a0 possibleError:(id *)a1;
- (id)decodeFromOneHotVector:(id)a0 possibleError:(id *)a1;
- (id)encodeToIndex:(id)a0 possibleError:(id *)a1;
- (id)encodeToOneHotVector:(id)a0 possibleError:(id *)a1;

@end
