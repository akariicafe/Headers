@class NSString, NSArray;
@protocol HFIconDescriptor;

@interface HFTriggerUISummary : NSObject

@property (readonly, nonatomic) NSString *triggerDisplayTitle;
@property (readonly, nonatomic) NSString *triggerName;
@property (readonly, nonatomic) NSString *triggerNaturalLanguageTitle;
@property (readonly, nonatomic) BOOL triggerNameIsConfigured;
@property (readonly, nonatomic) NSString *triggerTitle;
@property (readonly, nonatomic) NSString *triggerDescription;
@property (readonly, nonatomic) unsigned long long triggerType;
@property (readonly, nonatomic) id<HFIconDescriptor> triggerIconDescriptor;
@property (readonly, nonatomic) NSArray *triggerSummaryIconDescriptors;

- (void).cxx_destruct;
- (id)initWithTrigger:(id)a0 inHome:(id)a1 forceDisabled:(BOOL)a2 ignoringDisabled:(BOOL)a3;
- (void)_getTriggerName:(id)a0 home:(id)a1;
- (void)_updateWithTrigger:(id)a0 inHome:(id)a1 forceDisabled:(BOOL)a2 ignoringDisabled:(BOOL)a3;
- (id)initWithTrigger:(id)a0 inHome:(id)a1 forceDisabled:(BOOL)a2;

@end
