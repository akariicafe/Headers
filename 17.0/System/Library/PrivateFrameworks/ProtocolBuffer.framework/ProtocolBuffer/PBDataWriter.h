@class PBMutableData;

@interface PBDataWriter : NSObject {
    PBMutableData *_data;
}

- (void)writeUint8:(unsigned char)a0;
- (void)writeInt8:(char)a0;
- (unsigned long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)writeInt64:(long long)a0 forTag:(unsigned int)a1;
- (id)init;
- (void)writeUint64:(unsigned long long)a0 forTag:(unsigned int)a1;
- (void)writeSfixed64:(long long)a0 forTag:(unsigned int)a1;
- (void)writeSfixed32:(int)a0 forTag:(unsigned int)a1;
- (void)writeUint32:(unsigned int)a0 forTag:(unsigned int)a1;
- (void)writeFixed64:(unsigned long long)a0 forTag:(unsigned int)a1;
- (void)writeBigEndianShortThenString:(id)a0;
- (void)writeSint64:(long long)a0 forTag:(unsigned int)a1;
- (id)immutableData;
- (void)writeBareVarint:(unsigned long long)a0;
- (id)initWithInitialCapacity:(unsigned long long)a0;
- (void)writeFloat:(float)a0 forTag:(unsigned int)a1;
- (id)data;
- (void)writeData:(id)a0 forTag:(unsigned int)a1;
- (void)writeBOOL:(BOOL)a0 forTag:(unsigned int)a1;
- (void)writeDouble:(double)a0 forTag:(unsigned int)a1;
- (void)writeString:(id)a0 forTag:(unsigned int)a1;
- (void)writeInt32:(int)a0 forTag:(unsigned int)a1;
- (void)writeProtoBuffer:(id)a0;
- (void)writeBigEndianFixed16:(unsigned short)a0;
- (void)writeBigEndianFixed32:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)writeData:(id)a0;
- (void)writeTag:(unsigned int)a0 andType:(unsigned char)a1;
- (void)writeFixed32:(unsigned int)a0 forTag:(unsigned int)a1;
- (void)writeSint32:(int)a0 forTag:(unsigned int)a1;

@end
