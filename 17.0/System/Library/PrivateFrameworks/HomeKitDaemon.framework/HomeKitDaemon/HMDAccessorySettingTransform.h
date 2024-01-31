@interface HMDAccessorySettingTransform : NSObject

+ (id)modelsForGroup:(id)a0;
+ (void)changeAccessorySettingType:(id)a0 home:(id)a1;
+ (id)mergeWithGroupMetadata:(id)a0 group:(id)a1;
+ (id)modelForGroup:(id)a0;
+ (id)modelForSetting:(id)a0;
+ (id)modelForSetting:(id)a0 identifier:(id)a1 parentIdentifier:(id)a2;
+ (id)modelsForChangedConstraints:(id)a0 fromSetting:(id)a1;
+ (id)modelsForGroupDiff:(id)a0 fromGroup:(id)a1;
+ (id)modelsForSetting:(id)a0;
+ (id)modelsForSettingDiff:(id)a0 fromSetting:(id)a1;

@end
