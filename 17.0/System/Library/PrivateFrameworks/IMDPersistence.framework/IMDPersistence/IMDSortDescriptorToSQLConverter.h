@class NSDictionary, NSString;

@interface IMDSortDescriptorToSQLConverter : NSObject

@property (readonly, copy, nonatomic) NSDictionary *keyPathsToColumns;
@property (readonly, copy, nonatomic) NSString *expression;

- (id)init;
- (void).cxx_destruct;
- (id)_columnWithSortDescriptor:(id)a0;
- (id)_orderByClauseWithSortDescriptor:(id)a0;
- (id)initWithSortDescriptor:(id)a0 keyPathsToColumns:(id)a1;

@end
