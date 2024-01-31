@class NSString, NSDateComponentsFormatter;

@interface IMDTaskProgress : NSObject {
    unsigned long long _lastPercentComplete;
    double _startTime;
    NSDateComponentsFormatter *_intervalFormatter;
}

@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) unsigned long long totalCount;

- (void)dealloc;
- (id)initWithTaskName:(id)a0 totalCount:(unsigned long long)a1;
- (void)startTrackingTime;
- (void)updateWithCompletedCount:(unsigned long long)a0;

@end
