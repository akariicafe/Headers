@interface Swift.__EmptySetSingleton : Swift.__RawSetStorage <Swift._NSSetCore>

@property (nonatomic, readonly) long long count;

- (id)objectEnumerator;
- (id)member:(id)a0;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(long long)a2;
- (id)copyWithZone:(void *)a0;
- (id)initWithObjects:(const id *)a0 count:(long long)a1;

@end
