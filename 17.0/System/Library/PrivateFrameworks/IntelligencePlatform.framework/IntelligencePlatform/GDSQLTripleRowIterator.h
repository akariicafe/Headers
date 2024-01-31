@class NSString, GDLazyGraphTripleRow;

@interface GDSQLTripleRowIterator : NSObject <NSFastEnumeration> {
    GDLazyGraphTripleRow *_lazyTripleRow;
    BOOL _internalIteratorStarted;
    NSString *_iterateSubjectValue;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithColumns:(unsigned long long)a0 statement:(id)a1 subjectOverride:(id)a2;
- (id)relationshipIdIterator;

@end
