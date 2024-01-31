@class NSString, NSArray, NSDictionary, NSNumber;

@interface SCWWatchlistDiff : NSObject

@property (readonly, copy, nonatomic) NSString *updatedName;
@property (readonly, copy, nonatomic) NSArray *addedSymbols;
@property (readonly, copy, nonatomic) NSDictionary *indexesOfAddedSymbols;
@property (readonly, copy, nonatomic) NSArray *removedSymbols;
@property (readonly, copy, nonatomic) NSArray *reorderedSymbols;
@property (readonly, copy, nonatomic) NSDictionary *indexesOfReorderedSymbols;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *symbolsPreDiff;
@property (readonly, copy, nonatomic) NSArray *symbolsPostDiff;
@property (readonly, copy, nonatomic) NSNumber *updatedSortState;
@property (readonly, copy, nonatomic) NSNumber *updatedSortOrderState;
@property (readonly, copy, nonatomic) NSNumber *updatedDisplayState;

+ (id)reorderedSymbolsFrom:(id)a0 to:(id)a1;

- (void).cxx_destruct;
- (id)initWithOldSymbols:(id)a0 newSymbols:(id)a1 updatedName:(id)a2 updatedSortState:(id)a3 updatedSortOrderState:(id)a4 updatedDisplayState:(id)a5;

@end
