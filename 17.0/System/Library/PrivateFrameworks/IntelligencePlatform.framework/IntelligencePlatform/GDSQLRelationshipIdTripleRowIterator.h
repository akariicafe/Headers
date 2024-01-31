@class NSString, GDLazyGraphTripleRow;

@interface GDSQLRelationshipIdTripleRowIterator : NSObject <NSFastEnumeration> {
    GDLazyGraphTripleRow *_lazyTripleRow;
    NSString *_iterateSubjectValue;
    NSString *_iteratePredicateValue;
    NSString *_iterateRelationshipIdValue;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithLazyTripleRow:(id)a0;

@end
