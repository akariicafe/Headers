@class NSMutableIndexSet;
@protocol PXDisplayAssetFetchResult;

@interface PXPreheatInfo : NSObject

@property (readonly, nonatomic) NSMutableIndexSet *preheatedIndexes;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> fetchResult;
@property (readonly, nonatomic) long long preheatOrigin;
@property (readonly, nonatomic) BOOL finished;
@property (nonatomic) long long cachedBytes;

- (void)markAsFinished;
- (void).cxx_destruct;
- (id)initWithFetchResult:(id)a0 origin:(long long)a1;

@end
