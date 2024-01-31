@interface _DPHCMSWordRecord : _DPCMSWordRecord

@property (nonatomic) int fragmentBitIndex;
@property (nonatomic) int sequenceBitIndex;

+ (id)entityName;

- (BOOL)copyToManagedObject:(id)a0;
- (id)description;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)jsonString;
- (id)initWithKey:(id)a0 plainSequence:(id)a1 sequence:(id)a2 sequenceHashIndex:(unsigned short)a3 sequenceBitIndex:(unsigned int)a4 plainFragment:(id)a5 fragment:(id)a6 fragmentHashIndex:(unsigned short)a7 fragmentBitIndex:(unsigned int)a8 fragmentPosition:(unsigned short)a9 creationDate:(double)a10 submitted:(BOOL)a11 objectId:(id)a12;

@end
