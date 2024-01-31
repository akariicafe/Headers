@class NSMutableArray;

@interface TLKKeyValueGridView : NUIContainerGridView

@property (retain, nonatomic) NSMutableArray *keyLabels;
@property (retain, nonatomic) NSMutableArray *valueLabels;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithTuples:(id)a0 valueColumnIsTrailing:(BOOL)a1 truncateKey:(BOOL)a2;

@end
