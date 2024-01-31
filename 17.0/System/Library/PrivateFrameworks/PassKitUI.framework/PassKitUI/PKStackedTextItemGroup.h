@class NSArray;

@interface PKStackedTextItemGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *items;

- (id)init;
- (unsigned long long)hash;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
