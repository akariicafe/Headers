@protocol PXStoryColorGradingRepository;

@interface PXStoryColorGradingRepositoryFactory : NSObject

@property (class, readonly, nonatomic) id<PXStoryColorGradingRepository> sharedRepository;

@end
