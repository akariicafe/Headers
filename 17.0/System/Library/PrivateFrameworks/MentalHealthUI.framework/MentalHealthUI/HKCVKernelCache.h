@class NSMutableDictionary;

@interface HKCVKernelCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *cache;

- (id)init;
- (void)dealloc;

@end
