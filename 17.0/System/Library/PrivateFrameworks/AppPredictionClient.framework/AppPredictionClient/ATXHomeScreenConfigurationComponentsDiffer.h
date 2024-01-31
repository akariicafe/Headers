@class NSArray, NSOrderedCollectionDifference;

@interface ATXHomeScreenConfigurationComponentsDiffer : NSObject {
    NSOrderedCollectionDifference *_pinnedWidgetsDifference;
    NSOrderedCollectionDifference *_stacksDifference;
    NSOrderedCollectionDifference *_appsDifference;
}

@property (readonly, nonatomic) NSArray *addedApps;
@property (readonly, nonatomic) NSArray *removedApps;
@property (readonly, nonatomic) NSArray *addedPinnedWidgets;
@property (readonly, nonatomic) NSArray *deletedPinnedWidgets;
@property (readonly, nonatomic) NSArray *userAddedStackedWidgets;
@property (readonly, nonatomic) NSArray *userDeletedStackedWidgets;
@property (readonly, nonatomic) NSArray *userAddedPreviousSuggestedWidgets;
@property (readonly, nonatomic) NSArray *deletedPreviousSuggestedWidgets;
@property (readonly, nonatomic) NSArray *addedStacks;
@property (readonly, nonatomic) NSArray *deletedStacks;

- (id)_widgetsByWidgetUniqueIds:(id)a0;
- (void).cxx_destruct;
- (id)initWithPreviousComponents:(id)a0 currentComponents:(id)a1;

@end
