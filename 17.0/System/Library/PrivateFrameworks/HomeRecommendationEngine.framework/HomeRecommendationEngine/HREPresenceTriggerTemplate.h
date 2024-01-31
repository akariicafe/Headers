@interface HREPresenceTriggerTemplate : HRETriggerTemplate

@property (nonatomic) unsigned long long presenceType;
@property (nonatomic) unsigned long long presenceUserType;

- (id)_subclass_triggerBuilderForRecommendation:(id)a0 withObjects:(id)a1;

@end
