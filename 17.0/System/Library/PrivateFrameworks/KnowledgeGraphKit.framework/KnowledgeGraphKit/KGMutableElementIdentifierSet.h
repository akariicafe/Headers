@interface KGMutableElementIdentifierSet : KGElementIdentifierSet

- (void)intersectWithIdentifierSet:(id)a0;
- (void)addIdentifier:(unsigned long long)a0;
- (void)formSymmetricDifferenceWithIdentifierSet:(id)a0;
- (void *)mutableBitmap;
- (void)subtractIdentifierSet:(id)a0;
- (void)removeAllIdentifiers;
- (void)unionWithIdentifierSet:(id)a0;
- (id)copy;
- (void)removeIdentifier:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
