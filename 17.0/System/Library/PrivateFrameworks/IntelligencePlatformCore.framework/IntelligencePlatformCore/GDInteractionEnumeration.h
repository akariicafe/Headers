@class NSSortDescriptor, NSArray, _CDInteractionStore, NSPredicate;

@interface GDInteractionEnumeration : NSObject <NSFastEnumeration> {
    _CDInteractionStore *_store;
    NSArray *_batch;
    NSPredicate *_predicate;
    NSSortDescriptor *_sortDescriptor;
    unsigned long long _batchSize;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithStore:(id)a0 batchSize:(unsigned long long)a1;
- (id)initWithStore:(id)a0 predicate:(id)a1 sortDescriptor:(id)a2 batchSize:(unsigned long long)a3;

@end
