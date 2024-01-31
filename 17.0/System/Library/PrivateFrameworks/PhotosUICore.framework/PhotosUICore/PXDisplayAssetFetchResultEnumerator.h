@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    id<PXDisplayAssetFetchResult> _fetchResult;
    long long _currentIndex;
}

- (id)init;
- (void)reset;
- (id)nextObject;
- (unsigned long long)count;
- (id)firstObject;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayAssetFetchResult:(id)a0;

@end
