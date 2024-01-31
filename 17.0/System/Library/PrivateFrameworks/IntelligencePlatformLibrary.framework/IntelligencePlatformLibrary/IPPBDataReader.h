@class NSData;

@interface IPPBDataReader : NSObject {
    long long _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (int)readSint32;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (char)readInt8;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (long long)readInt64;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (unsigned long long)offset;
- (long long)readSfixed64;
- (id)readData;
- (unsigned int)readFixed32;
- (id)readBigEndianShortThenString;
- (id)initWithData:(id)a0;
- (id)data;
- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (long long)readVarInt;
- (int)readInt32;
- (BOOL)hasError;
- (double)readDouble;
- (unsigned long long)readUint64;
- (float)readFloat;
- (void).cxx_destruct;
- (unsigned short)readBigEndianFixed16;
- (BOOL)isAtEnd;
- (long long)readSint64;
- (id)readBytes:(unsigned int)a0;
- (BOOL)hasMoreData;
- (unsigned long long)readFixed64;
- (id)readString;
- (unsigned int)readBigEndianFixed32;
- (unsigned int)readUint32;
- (BOOL)readBOOL;
- (void)updateData:(id)a0;
- (int)readSfixed32;
- (unsigned long long)readBigEndianFixed64;
- (id)readProtoBuffer;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;

@end
