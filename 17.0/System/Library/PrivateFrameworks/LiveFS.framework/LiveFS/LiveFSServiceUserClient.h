@interface LiveFSServiceUserClient : LiveFSUserClient {
    unsigned int volumePort;
}

- (id)init;
- (int)flushMeta:(int)a0 wait:(int)a1;
- (int)clearMetaBlocks:(int)a0 ranges:(struct FSKit_Meta_BlockRange_s { long long x0; unsigned int x1; unsigned int x2; } *)a1 rangesCount:(int)a2 wait:(int)a3;
- (int)writeMeta:(int)a0 buffer:(const void *)a1 offset:(long long)a2 length:(unsigned long long)a3;
- (int)purgeMetaBlocks:(int)a0 ranges:(struct FSKit_Meta_BlockRange_s { long long x0; unsigned int x1; unsigned int x2; } *)a1 rangesCount:(int)a2;
- (int)readMeta:(int)a0 buffer:(void *)a1 offset:(long long)a2 length:(unsigned long long)a3;
- (int)readMetaWithRA:(int)a0 buffer:(void *)a1 offset:(long long)a2 length:(unsigned long long)a3 raList:(struct FSKit_Meta_Readahead_s { long long x0; unsigned long long x1; } *)a4 raListCount:(int)a5;
- (int)closeFileDescriptorForKernel:(int)a0;
- (unsigned int)createVolumePort;
- (int)flushMetaBlocks:(int)a0 ranges:(struct FSKit_Meta_BlockRange_s { long long x0; unsigned int x1; unsigned int x2; } *)a1 rangesCount:(int)a2 wait:(int)a3;
- (unsigned int)getVolumePort;
- (int)openFileDescriptorForKernel:(int)a0 flags:(int)a1;
- (int)writeMetaAsync:(int)a0 buffer:(const void *)a1 offset:(long long)a2 length:(unsigned long long)a3;
- (int)writeMetaDelayed:(int)a0 buffer:(const void *)a1 offset:(long long)a2 length:(unsigned long long)a3;
- (int)writeMetaSubBlock:(int)a0 offset:(long long)a1 length:(unsigned long long)a2 subBlockBuffer:(const void *)a3 subBlockOffset:(long long)a4 subBlockLength:(unsigned long long)a5;

@end
