@interface ESDMetafileBlipContext : ESDBlipContext {
    unsigned int mCb;
}

@property unsigned int defaultHeaderSize;

- (id)initWithOffset:(unsigned int)a0 byteCount:(unsigned int)a1 uncompressed:(unsigned int)a2 stream:(struct SsrwOOStream { void /* function */ **x0; } *)a3 streamID:(unsigned int)a4;
- (BOOL)loadDelayedNode:(id)a0;

@end
