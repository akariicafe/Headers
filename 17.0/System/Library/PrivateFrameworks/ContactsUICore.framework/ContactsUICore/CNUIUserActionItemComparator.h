@interface CNUIUserActionItemComparator : NSObject

+ (id /* block */)comparatorWithActionItemGrouping;
+ (id /* block */)comparatorWithAlphabeticalOrderByLabel;
+ (id /* block */)comparatorWithAlphabeticalOrderByTargetHandle;
+ (id /* block */)comparatorWithPreferredLabelsFirst;
+ (id)scoreForUserAction:(id)a0;

@end
