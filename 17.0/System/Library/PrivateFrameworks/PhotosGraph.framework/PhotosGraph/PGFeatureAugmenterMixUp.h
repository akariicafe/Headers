@class NSString;

@interface PGFeatureAugmenterMixUp : NSObject <PGFeatureAugmenter>

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) float alpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)name;
+ (BOOL)_generateError:(id *)a0 withCode:(long long)a1 andMessage:(id)a2;
+ (id)instanceWithParameters:(id)a0 error:(id *)a1;
+ (id)mixupOfFloatVector:(id)a0 withFloatVector:(id)a1 lambda:(float)a2;

@end
