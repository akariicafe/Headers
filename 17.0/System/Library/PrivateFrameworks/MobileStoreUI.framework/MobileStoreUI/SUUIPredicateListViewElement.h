@class NSArray, NSPredicate;

@interface SUUIPredicateListViewElement : SUUIViewElement {
    NSPredicate *_compoundEntityValuePredicate;
}

@property (readonly, copy, nonatomic) NSArray *predicateViewElements;
@property (readonly, nonatomic) NSPredicate *compoundEntityValuePredicate;

- (void).cxx_destruct;
- (void)_enumeratePredicateViewElementsUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;

@end
