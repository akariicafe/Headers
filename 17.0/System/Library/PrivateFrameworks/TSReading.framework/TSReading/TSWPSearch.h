@class TSWPFilteredString, TSWPStorage, NSString;

@interface TSWPSearch : TSKSearch

@property (readonly, retain, nonatomic) TSWPFilteredString *filteredString;
@property (readonly, nonatomic) TSWPStorage *storage;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSString *searchedString;

- (BOOL)isComplete;
- (void)dealloc;
- (void)foundHitWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithString:(id)a0 options:(unsigned long long)a1 hitBlock:(id /* block */)a2 storage:(id)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

@end
