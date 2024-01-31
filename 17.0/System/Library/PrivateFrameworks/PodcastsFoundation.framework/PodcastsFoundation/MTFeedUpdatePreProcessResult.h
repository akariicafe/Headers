@class NSString;

@interface MTFeedUpdatePreProcessResult : NSObject

@property (class, readonly, nonatomic) MTFeedUpdatePreProcessResult *shouldNotContinueResult;

@property (readonly, nonatomic) BOOL shouldContinue;
@property (readonly, nonatomic) NSString *createdPodcastUUID;

- (void).cxx_destruct;
- (id)initWithShouldContinue:(BOOL)a0 createdPodcastUUID:(id)a1;

@end
