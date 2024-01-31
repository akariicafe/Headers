@class NSString, PHFetchResult;

@interface PXTimelineContentModeDataSource : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) PHFetchResult *assetSources;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 assetSources:(id)a1;

@end
