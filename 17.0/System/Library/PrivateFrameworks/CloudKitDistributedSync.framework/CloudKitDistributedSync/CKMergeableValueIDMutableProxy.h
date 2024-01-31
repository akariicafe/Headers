@interface CKMergeableValueIDMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (void)setIdentifier:(id)a0;
- (void)setZoneName:(id)a0;
- (void)setZoneOwnerName:(id)a0;
- (void)copyFromMergeableValueID:(id)a0;
- (void)copyFromReadProxy:(id)a0;
- (void)setIdentifierBytes:(void *)a0 length:(unsigned long long)a1;
- (void)setZoneNameBytes:(void *)a0 length:(unsigned long long)a1;
- (void)setZoneOwnerNameBytes:(void *)a0 length:(unsigned long long)a1;

@end
