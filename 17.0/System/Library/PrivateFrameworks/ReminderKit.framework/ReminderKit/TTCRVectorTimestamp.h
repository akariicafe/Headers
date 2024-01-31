@class CRVectorTimestamp;

@interface TTCRVectorTimestamp : TTVectorTimestamp

@property (retain, nonatomic) CRVectorTimestamp *crTimestamp;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)a0;
- (unsigned long long)clockForUUID:(id)a0;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)a0;

@end
