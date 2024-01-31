@interface HMDAccessorySettingMergeHandler : NSObject

+ (BOOL)_extractMinMaxStep:(id)a0 minConstraint:(id *)a1 maxConstraint:(id *)a2 stepConstraint:(id *)a3 first:(id)a4;
+ (BOOL)_isNumber:(id)a0 betweenStart:(id)a1 andEnd:(id)a2 first:(id)a3;
+ (id)_mergeFirst:(id)a0 second:(id)a1 mergedConstraints:(id)a2 mergeStrategy:(id)a3;
+ (id)_mergeRangeConstraintsFirst:(id)a0 second:(id)a1 shouldAddMissing:(BOOL)a2;
+ (id)_mergeValidValueConstraintsFirst:(id)a0 second:(id)a1 shouldAddMissing:(BOOL)a2;
+ (BOOL)mergeFirst:(id)a0 second:(id)a1 mergeStrategy:(id)a2 shouldAddMissing:(BOOL)a3;

@end
