@class NSArray;

@interface PKVectorMultiTimestamp : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *timestamps;

- (unsigned long long)hash;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)serialize;
- (id)initWithTimestamps:(id)a0;
- (unsigned long long)compareTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)clockElementForUUID:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)clockForUUID:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithArchive:(const void *)a0 andCapacity:(unsigned long long)a1;
- (id)initWithData:(id)a0 andCapacity:(unsigned long long)a1;
- (void)mergeWithTimestamp:(id)a0;
- (void)saveToArchive:(void *)a0;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1 atIndex:(unsigned long long)a2;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2 atIndex:(unsigned long long)a3;
- (id)sortedUUIDs;

@end
