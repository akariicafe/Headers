@interface _UIScrollViewAsyncScrollEventCompletionResult : NSObject

@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double updateTime;
@property (nonatomic) BOOL handled;
@property (nonatomic) BOOL finishedDecelerating;

@end
