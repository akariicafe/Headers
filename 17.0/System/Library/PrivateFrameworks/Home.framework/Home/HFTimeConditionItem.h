@class HFTimeCondition, NSString;

@interface HFTimeConditionItem : HFItem <HFConditionItem>

@property (retain, nonatomic) HFTimeCondition *condition;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCondition:(id)a0;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithConditionType:(unsigned long long)a0;
- (id)initWithConditionType:(unsigned long long)a0 condition:(id)a1;

@end
