@class wspHeader;

@interface wspQueryOut : NSObject

@property (retain) wspHeader *whdr;
@property unsigned int trueSequential;
@property unsigned int workID;
@property unsigned int cursor;

- (id)init;
- (void).cxx_destruct;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesDecoded:(unsigned int *)a2;

@end
