@class NSDictionary;

@interface PHASESpatialPipeline : NSObject

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy) NSDictionary *entries;

+ (id)new;
+ (BOOL)addToDictionary:(id)a0 add:(BOOL)a1 key:(id)a2;

- (id)init;
- (id)initWithFlags:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;

@end
