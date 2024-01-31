@interface HKIndexableObject : NSObject

@property (readonly, copy, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long compoundIndex;
@property (readonly, nonatomic) unsigned char outermostIndex;

+ (id)indexableObjectWithObject:(id)a0;
+ (id)indexableObjectWithObject:(id)a0 compoundIndex:(unsigned long long)a1;
+ (id)indexableObjectWithObject:(id)a0 index:(unsigned char)a1 error:(id *)a2;
+ (id)indexableObjectsByApplyingOutermostIndex:(id)a0 expectedCount:(long long)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)indexableObjectCollectingPushingIndex:(unsigned char)a0 error:(id *)a1;
- (id)indexableObjectPoppingIndexWithError:(id *)a0;
- (id)initWithObject:(id)a0 compoundIndex:(unsigned long long)a1;

@end
