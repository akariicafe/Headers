@class MADRemoveBackgroundCachedMaskState;

@interface MADImageRemoveBackgroundResource : VCPMADVisionResource

@property (nonatomic) BOOL maskOnly;
@property (retain, nonatomic) MADRemoveBackgroundCachedMaskState *cachedMaskState;

+ (id)sharedResource;

- (void)purge;
- (void).cxx_destruct;
- (long long)activeCost;
- (long long)inactiveCost;

@end
