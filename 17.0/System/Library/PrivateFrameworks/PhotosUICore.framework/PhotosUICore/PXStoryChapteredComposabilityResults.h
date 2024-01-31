@class NSString;
@protocol PXDisplayAssetFetchResult, PXStoryComposabilityResults, PXStoryChapterCollection;

@interface PXStoryChapteredComposabilityResults : NSObject <PXStoryComposabilityResults>

@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssets;
@property (readonly, nonatomic) id<PXStoryComposabilityResults> originalResults;
@property (readonly, nonatomic) id<PXStoryChapterCollection> chapterCollection;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
