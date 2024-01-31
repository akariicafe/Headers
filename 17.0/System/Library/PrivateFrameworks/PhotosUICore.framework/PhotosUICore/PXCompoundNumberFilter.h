@class NSArray;

@interface PXCompoundNumberFilter : PXNumberFilter

@property (copy, nonatomic) NSArray *filters;

- (double)updatedOutput;
- (void).cxx_destruct;

@end
