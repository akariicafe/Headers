@class HFEventBuilder;
@protocol HFTimeEventBuilder;

@interface HFTimerTriggerTimeEventAdapter : NSObject

@property (readonly, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;

+ (id)adapterWithEventBuilder:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)createTriggerWithName:(id)a0 timeZone:(id)a1 recurrences:(id)a2;
- (id)initWithEventBuilder:(id)a0;
- (id)updateTrigger:(id)a0;
- (void)updateTriggerBuilder:(id)a0 recurrences:(id)a1 inHome:(id)a2;

@end
