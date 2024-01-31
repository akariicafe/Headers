@class NSArray, NSString;

@interface NAGroupedItemDiff : NSObject

@property (copy, nonatomic) NSArray *fromGroups;
@property (copy, nonatomic) NSArray *toGroups;
@property (copy, nonatomic) id /* block */ changeTest;
@property (copy, nonatomic) NSArray *groupOperations;
@property (copy, nonatomic) NSArray *itemOperations;
@property (readonly, copy, nonatomic) NSArray *allOperations;
@property (readonly, copy, nonatomic) NSString *operationDescription;

+ (id)_groupedItemDiffWithGroupOperations:(id)a0 itemOperations:(id)a1;
+ (id)diffFromGroups:(id)a0 toGroups:(id)a1;
+ (id)diffFromGroups:(id)a0 toGroups:(id)a1 changeTest:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_briefDescriptionForOperations:(id)a0 type:(id)a1;
- (id)_operationDescriptionWithPrefix:(id)a0;
- (void)_performDiff;
- (id)_performItemDiffFromGroup:(id)a0 atIndex:(id)a1 toGroup:(id)a2 atIndex:(unsigned long long)a3;
- (id)initWithFromGroups:(id)a0 toGroups:(id)a1 changeTest:(id /* block */)a2;

@end
