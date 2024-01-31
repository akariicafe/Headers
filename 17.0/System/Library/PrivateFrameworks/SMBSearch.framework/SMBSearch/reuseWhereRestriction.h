@interface reuseWhereRestriction : NSObject <RestrictionProtocol>

@property unsigned int resuseWhereID;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;
- (id)initWithReuseWhereID:(unsigned int)a0 Weight:(unsigned int)a1;
- (int)restrictionNumber;

@end
