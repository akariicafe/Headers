@class AMSThreadSafeDictionary;

@interface AMSAccountStoreCache : NSObject

@property (class, readonly, nonatomic) AMSThreadSafeDictionary *cache;

+ (id)accountStoreForMediaType:(id)a0;
+ (void)_resetAccountStoreCache;
+ (id)mediaTypeForAccountStore:(id)a0;

@end
