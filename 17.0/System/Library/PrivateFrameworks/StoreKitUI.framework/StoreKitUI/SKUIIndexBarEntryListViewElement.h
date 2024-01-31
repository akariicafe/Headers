@class NSArray, NSString;

@interface SKUIIndexBarEntryListViewElement : SKUIViewElement

@property (readonly, copy, nonatomic) NSArray *childIndexBarEntryElements;
@property (readonly, nonatomic) long long entryListElementType;
@property (readonly, nonatomic, getter=isIndexBarHiddenWhenEmpty) BOOL indexBarHiddenWhenEmpty;
@property (readonly, nonatomic) long long minimumEntityCount;
@property (readonly, copy, nonatomic) NSString *targetIndexBarEntryID;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
