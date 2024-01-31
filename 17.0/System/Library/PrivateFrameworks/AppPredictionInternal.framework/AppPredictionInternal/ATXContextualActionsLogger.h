@class BPSPublisher;
@protocol ATXPETEventTracker2Protocol;

@interface ATXContextualActionsLogger : NSObject

@property (retain, nonatomic) id<ATXPETEventTracker2Protocol> tracker;
@property (retain, nonatomic) BPSPublisher *publisher;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultTrackerAndPublisher;
- (id)initWithTracker:(id)a0 andPublisher:(id)a1;
- (void)logDailyContextualActions;
- (id)populateContextualActionEventFromBiomeEvent:(id)a0 withTimeStamp:(double)a1;
- (void)sendEvent:(id)a0 usingPetTracker:(id)a1;

@end
