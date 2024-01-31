@class NSArray;

@interface SUUIShareTemplateViewElement : SUUIViewElement

@property (readonly, nonatomic) NSArray *activities;

- (id)activityForShareSheetActivityType:(id)a0;
- (id)activityForUIActivityType:(id)a0;

@end
