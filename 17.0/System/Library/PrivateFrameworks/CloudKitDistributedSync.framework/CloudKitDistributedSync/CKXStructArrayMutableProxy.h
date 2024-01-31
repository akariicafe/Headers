@interface CKXStructArrayMutableProxy : CKXArrayProxyBase

@property (nonatomic) long long index;

- (BOOL)isMutable;
- (void)reset;
- (long long)count;
- (void)appendWithProxyBlock:(id /* block */)a0;

@end
