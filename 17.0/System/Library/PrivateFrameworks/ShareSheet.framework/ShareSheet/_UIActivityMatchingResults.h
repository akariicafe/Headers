@class NSArray, NSMutableSet, NSMutableArray, _UIActivityMatchingContext;

@interface _UIActivityMatchingResults : NSObject {
    NSMutableArray *_hiddenActivitiesMutable;
    NSMutableSet *_excludedActivityTypesSet;
}

@property (retain, nonatomic) NSArray *orderedActivities;
@property (readonly, nonatomic) _UIActivityMatchingContext *context;
@property (readonly, nonatomic) NSArray *hiddenActivities;
@property (readonly, nonatomic) NSArray *excludedActivityTypes;

- (void).cxx_destruct;
- (void)addExcludedActivityTypes:(id)a0;
- (void)addHiddenActivities:(id)a0;
- (id)initWithActivityMatchingContext:(id)a0;

@end
