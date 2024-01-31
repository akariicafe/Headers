@class HFEventTriggerBuilder, HFEventBuilder;
@protocol HFTimeEventBuilder;

@interface HFTimeEventBuilderItem : HFEventBuilderItem

@property (retain, nonatomic) HFEventTriggerBuilder *containingTriggerBuilder;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *timeEventBuilder;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;

@end
