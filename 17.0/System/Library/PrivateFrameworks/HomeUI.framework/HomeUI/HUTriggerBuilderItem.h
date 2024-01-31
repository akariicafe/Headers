@class HFTriggerBuilder;

@interface HUTriggerBuilderItem : HFItem <NSCopying>

@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) unsigned long long naturalLanguageNameType;

+ (id)_detailedErrorDescriptionForForceDisableReasons:(unsigned long long)a0 inHome:(id)a1;
+ (id)settingsURLForForceDisableReasons:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_triggerType;
- (id)_forceDisableReasons;
- (id)_resultsForTriggerConditions;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 nameType:(unsigned long long)a1;

@end
