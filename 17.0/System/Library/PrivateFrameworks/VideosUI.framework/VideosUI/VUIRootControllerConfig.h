@class NSNumber, NSArray;

@interface VUIRootControllerConfig : NSObject

@property (retain, nonatomic) NSNumber *normalControllerLimit;
@property (retain, nonatomic) NSNumber *warningControllerLimit;
@property (retain, nonatomic) NSNumber *criticalControllerLimit;
@property (retain, nonatomic) NSArray *doNotPurgeList;
@property (nonatomic) long long sidebarImagePrefetchBatchLimit;

- (id)init;
- (void).cxx_destruct;

@end
