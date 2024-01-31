@interface GCPhysicalInputElementCollection : NSObject <NSFastEnumeration>

@property (readonly) unsigned long long count;

- (id)init;
- (id)elementAtIndex:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)elementEnumerator;
- (id)elementForAlias:(id)a0;

@end
