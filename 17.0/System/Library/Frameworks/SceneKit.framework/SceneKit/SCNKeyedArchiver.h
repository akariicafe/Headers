@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver

@property (nonatomic) BOOL skipMorphTargets;
@property (copy, nonatomic) NSDictionary *options;

+ (id)archivedDataWithRootObject:(id)a0 options:(id)a1;

- (void)dealloc;

@end
