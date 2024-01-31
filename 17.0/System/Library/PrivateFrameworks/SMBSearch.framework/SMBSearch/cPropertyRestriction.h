@class cbaseVariant, fullPropSpec;

@interface cPropertyRestriction : NSObject <RestrictionProtocol>

@property unsigned int relOp;
@property (retain) fullPropSpec *propSpec;
@property (retain) cbaseVariant *prVal;
@property unsigned int lcid;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;
- (id)initWithRelop:(unsigned int)a0 Weight:(unsigned int)a1;
- (int)restrictionNumber;

@end
