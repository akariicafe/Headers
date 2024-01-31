@class MFWeakObjectCache;
@protocol NSCopying;

@interface _MFWeakObjectCacheRef : NSObject

@property (copy, nonatomic) id<NSCopying> key;
@property (weak, nonatomic) MFWeakObjectCache *cache;

- (void)dealloc;
- (void).cxx_destruct;

@end
