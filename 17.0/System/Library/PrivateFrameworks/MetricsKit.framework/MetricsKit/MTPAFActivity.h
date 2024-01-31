@class NSString, NSArray, MTMediaTimeTracker;

@interface MTPAFActivity : NSObject

@property (nonatomic) long long activityType;
@property (nonatomic) unsigned long long startPosition;
@property (nonatomic) unsigned long long lastPosition;
@property (nonatomic) BOOL stopped;
@property (retain, nonatomic) NSString *startTriggerType;
@property (retain, nonatomic) NSString *startReason;
@property (retain, nonatomic) NSArray *startEventData;
@property (retain, nonatomic) NSString *stopTriggerType;
@property (retain, nonatomic) NSString *stopReason;
@property (retain, nonatomic) NSArray *stopEventData;
@property (copy, nonatomic) NSArray *itemActivities;
@property (retain, nonatomic) MTMediaTimeTracker *timeTracker;

- (void).cxx_destruct;
- (void)addItemsFromPlaylist:(id)a0 pafKit:(id)a1;
- (id)initWithType:(long long)a0 playbackRate:(float)a1 atMilliseconds:(unsigned long long)a2 triggerType:(id)a3 reason:(id)a4 eventData:(id)a5;
- (void)startItemActivityIfPossible:(id)a0;
- (void)stopItemActivityIfPossible:(id)a0;
- (void)stoppedAtMilliseconds:(unsigned long long)a0 triggerType:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)synchronizeAtMilliseconds:(unsigned long long)a0;
- (void)updateItemActivities:(id)a0;

@end
