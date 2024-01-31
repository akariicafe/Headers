@class NSObject, PHFetchResult, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PXPeopleDetailSettingsFaceCropDataSource : NSObject

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (retain, nonatomic) NSMutableDictionary *images;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imagesIsolationQueue;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)numberOfAssets;
- (id)imageAtIndexPath:(id)a0;
- (id)nameAtIndexPath:(id)a0;

@end
