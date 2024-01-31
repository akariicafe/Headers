@class HFTriggerNaturalLanguageOptions, HMHome;

@interface HFPresenceEventFormatter : NSFormatter

@property (weak, nonatomic) HFTriggerNaturalLanguageOptions *options;
@property (nonatomic) unsigned long long nameType;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)initWithHome:(id)a0;
- (id)stringForPresenceEventBuilder:(id)a0;
- (id)_formattedListForSelectedUsers:(id)a0 inHome:(id)a1;
- (id)stringForPresenceEvent:(id)a0;
- (id)stringForPresenceEventBuilder:(id)a0 actionsDescription:(id)a1;

@end
