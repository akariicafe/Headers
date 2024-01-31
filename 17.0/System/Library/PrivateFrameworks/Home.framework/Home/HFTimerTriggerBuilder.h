@class NSTimeZone, NSArray, HFEventBuilder, HFTriggerBuilder;
@protocol HFConcreteTimeTriggerBuilderLikeObject, HFTimeEventBuilder;

@interface HFTimerTriggerBuilder : HFTriggerBuilder

@property (retain, nonatomic) id<HFConcreteTimeTriggerBuilderLikeObject> timeInterface;
@property (retain, nonatomic) HFTriggerBuilder *concreteTriggerBuilder;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) unsigned long long preferredHomeKitObjectType;

- (void)setName:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)validationError;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (id)naturalLanguageDetailsWithOptions:(id)a0;
- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (BOOL)supportsEndEvents;
- (BOOL)_supportsEventBasedTimeTriggers;
- (id)_commitUsingBuilders;
- (void)_createConcreteTriggerBuilder;
- (BOOL)_currentStateRequiresEventBasedTimeTriggers;
- (id)_lazy_performValidation;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)compareToObject:(id)a0;
- (id)convertedEventTriggerBuilder;
- (id)getOrCreateTriggerBuilder;
- (id)lazilyFinishCommitingTrigger;
- (BOOL)supportsConditions;
- (BOOL)supportsHomeKitAutomationBuilders;
- (id)updateTriggerBuilder:(id)a0;
- (BOOL)wantsConvertToEventTrigger;

@end
