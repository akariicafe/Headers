@class NSString, HFCondition;

@interface HFUnknownConditionItem : HFItem <HFConditionItem>

@property (readonly, nonatomic) HFCondition *condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
