@class NSDictionary;

@interface CKVLinkSpeechItemCapacityAllocation : NSObject

@property (readonly, nonatomic) unsigned long long dynamicCapacity;
@property (readonly, nonatomic) unsigned long long oovCapacity;
@property (readonly, nonatomic) NSDictionary *dynamicItemCounts;
@property (readonly, nonatomic) NSDictionary *oovItemCounts;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDynamicItemCounts:(id)a0 oovItemCounts:(id)a1 dynamicCapacity:(unsigned long long)a2 oovCapacity:(unsigned long long)a3;

@end
