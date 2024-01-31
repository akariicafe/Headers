@class NSMutableArray;

@interface SearchUIButtonItemFactory : NSObject

@property (retain, nonatomic) NSMutableArray *fetchedButtonItems;
@property (retain, nonatomic) NSMutableArray *buttonItemGenerators;

- (void).cxx_destruct;
- (void)fetchSearchUIButtonitemsWithSFButtonItems:(id)a0 maxButtonItems:(unsigned long long)a1 shouldReverseButtonOrder:(BOOL)a2 completion:(id /* block */)a3;

@end
