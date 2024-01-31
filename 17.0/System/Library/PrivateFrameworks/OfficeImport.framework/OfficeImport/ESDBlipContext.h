@class NSString;

@interface ESDBlipContext : NSObject <OCDDelayedMediaContext> {
    struct SsrwOOStream { void /* function */ **x0; } *mStream;
    unsigned int mStreamID;
    unsigned int mStartOffset;
    unsigned int mByteCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct SsrwOOStream { void /* function */ **x0; } *)stream;
- (id)dataRep;
- (id)initWithOffset:(unsigned int)a0 byteCount:(unsigned int)a1 stream:(struct SsrwOOStream { void /* function */ **x0; } *)a2 streamID:(unsigned int)a3;
- (BOOL)loadDelayedNode:(id)a0;
- (BOOL)saveDelayedMedia:(id)a0 toFile:(id)a1;

@end
