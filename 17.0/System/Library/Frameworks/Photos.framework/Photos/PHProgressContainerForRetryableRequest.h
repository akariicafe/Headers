@class NSProgress;

@interface PHProgressContainerForRetryableRequest : NSObject {
    NSProgress *_currentRequestProgress;
    long long _currentPendingCount;
}

@property (readonly, nonatomic) NSProgress *totalProgress;

- (id)init;
- (void).cxx_destruct;
- (void)setRequestProgress:(id)a0;

@end
