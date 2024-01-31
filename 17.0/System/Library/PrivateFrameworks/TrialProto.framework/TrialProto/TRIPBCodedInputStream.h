@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (void)checkLastTagWas:(int)a0;
- (void)dealloc;
- (unsigned long long)position;
- (long long)readSFixed64;
- (int)readSInt32;
- (long long)readInt64;
- (unsigned int)readFixed32;
- (id)initWithData:(id)a0;
- (void)skipMessage;
- (int)readInt32;
- (double)readDouble;
- (long long)readSInt64;
- (float)readFloat;
- (BOOL)isAtEnd;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (int)readSFixed32;
- (unsigned long long)readFixed64;
- (id)readString;
- (BOOL)readBool;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (BOOL)skipField:(int)a0;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (int)readTag;
- (unsigned int)readUInt32;
- (int)readEnum;
- (void)popLimit:(unsigned long long)a0;
- (id)readBytes;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (unsigned long long)readUInt64;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;

@end
