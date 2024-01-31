@interface PMLDataChunkPlist : PMLDataChunk {
    id _plist;
    BOOL _parsed;
}

@property (readonly, nonatomic) id plist;

+ (id)chunkWithPlist:(id)a0;
+ (unsigned int)dataChunkType;

- (void).cxx_destruct;

@end
