@class NSObject;
@protocol RestrictionProtocol;

@interface cCoercionRestriction : NSObject <RestrictionProtocol>

@property int cop;
@property unsigned int fValue;
@property (retain) NSObject<RestrictionProtocol> *restrictionObj;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void)setRestriction:(id)a0;
- (void).cxx_destruct;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;
- (id)initWithOp:(int)a0 FValue:(unsigned int)a1 Weight:(unsigned int)a2;
- (int)restrictionNumber;

@end
