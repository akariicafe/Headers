@class NSString, NSArray, REMListChangeItem;

@interface REMListGroceryContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (nonatomic) BOOL shouldCategorizeGroceryItems;
@property (readonly, nonatomic) BOOL shouldSuggestConversionToGroceryList;
@property (copy, nonatomic) NSString *groceryLocaleID;
@property (readonly, nonatomic) NSArray *unsavedReminderIDsToCategorizeAsGroceryItems;

- (void)setShouldSuggestConversionToGroceryList:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithListChangeItem:(id)a0;
- (void)categorizeGroceryItemsWithReminderIDs:(id)a0;

@end
