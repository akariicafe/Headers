@class NSData;

@interface PMLDataChunk : NSObject <NSCopying> {
    NSData *_backingData;
    NSData *_superdata;
}

+ (id)chunksFromData:(id)a0;
+ (id)chunkOfType:(unsigned int)a0 data:(id)a1 superdata:(id)a2;
+ (id)chunksFromFileAtPath:(id)a0;
+ (unsigned int)dataChunkType;
+ (id)serializeChunks:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSuperdata:(id)a0;

@end
