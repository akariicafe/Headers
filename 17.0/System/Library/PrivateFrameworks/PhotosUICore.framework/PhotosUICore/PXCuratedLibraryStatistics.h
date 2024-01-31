@class NSString;

@interface PXCuratedLibraryStatistics : NSObject

@property (readonly, nonatomic) NSString *summaryDescription;

- (long long)numberOfAssetsWithPlaybackStyle:(long long)a0 displayProminence:(long long)a1 autoPlaybackEligibility:(long long)a2;

@end
