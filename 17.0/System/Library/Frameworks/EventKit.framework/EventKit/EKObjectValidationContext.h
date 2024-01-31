@class EKObject;

@interface EKObjectValidationContext : NSObject

@property (readonly, nonatomic) EKObject *rootObject;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) BOOL reachedMaxDepth;

- (void).cxx_destruct;
- (void)faultIfNeededForObject:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
