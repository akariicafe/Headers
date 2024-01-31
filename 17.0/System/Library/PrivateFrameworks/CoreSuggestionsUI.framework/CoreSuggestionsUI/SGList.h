@class NSMutableArray;
@protocol SGListDelegate;

@interface SGList : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id<SGListDelegate> delegate;
@property (copy, nonatomic) id /* block */ comparator;

- (id)itemAtIndex:(unsigned long long)a0;
- (id)init;
- (BOOL)removeItem:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)removeAllItems;
- (BOOL)addItem:(id)a0;
- (id)items;
- (unsigned long long)count;
- (void).cxx_destruct;
- (unsigned long long)indexOfItem:(id)a0;

@end
