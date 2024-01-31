@class vtVector, vtSafeArray, utf16leData, NSNumber;

@interface cbaseVariant : NSObject

@property (readonly) unsigned short vType;
@property (readonly) unsigned char vData1;
@property (readonly) unsigned char vData2;
@property (readonly, retain) NSNumber *scalarValue;
@property (readonly, retain) utf16leData *strData;
@property (retain) vtVector *vectObj;
@property (retain) vtSafeArray *arrObj;

- (id)init;
- (void).cxx_destruct;
- (int)encodeArray:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (int)encodeIntArray:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (int)encodeIntVector:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (int)encodeStrArray:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (int)encodeStrVector:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (int)encodeVector:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (int)setArrayWithType:(unsigned short)a0 ValueArray:(id)a1;
- (int)setIntArrayType:(unsigned int)a0 ValueArray:(id)a1;
- (int)setIntVectorType:(unsigned int)a0 ValueArray:(id)a1;
- (int)setScalarType:(unsigned short)a0 ScalarValue:(id)a1;
- (int)setStrArrayType:(unsigned short)a0 ValueArray:(id)a1;
- (int)setStrVectorType:(unsigned short)a0 ValueArray:(id)a1;
- (int)setStringType:(unsigned short)a0 UTF8Str:(id)a1;
- (int)setVectorWithType:(unsigned short)a0 ValueArray:(id)a1;

@end
