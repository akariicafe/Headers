@interface MTLDebugIOCommandBuffer : MTLToolsIOCommandBuffer

- (void)commit;
- (void)tryCancel;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)addCompletedHandler:(id /* block */)a0;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)loadBuffer:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 handle:(id)a3 handleOffset:(unsigned long long)a4;
- (void)loadBuffer:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 sourceHandle:(id)a3 sourceHandleOffset:(unsigned long long)a4;
- (void)loadBytes:(void *)a0 size:(unsigned long long)a1 sourceHandle:(id)a2 sourceHandleOffset:(unsigned long long)a3;
- (void)loadTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5 dstOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 handle:(id)a7 handleOffset:(unsigned long long)a8;
- (void)loadTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceBytesPerRow:(unsigned long long)a4 sourceBytesPerImage:(unsigned long long)a5 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 sourceHandle:(id)a7 sourceHandleOffset:(unsigned long long)a8;
- (void)signalEvent:(id)a0 value:(unsigned long long)a1;
- (void)internalValidateLoadBytes:(void *)a0 size:(unsigned long long)a1 sourceHandle:(id)a2 sourceHandleOffset:(unsigned long long)a3;
- (void)internalValidateEvent:(id)a0;
- (void)internalValidateLoadBuffer:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2 sourceHandle:(id)a3 sourceHandleOffset:(unsigned long long)a4;
- (void)internalValidateLoadTexture:(id)a0 slice:(unsigned long long)a1 level:(unsigned long long)a2 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 sourceBytesPerRow:(unsigned long long)a4 sourceBytesPerImage:(unsigned long long)a5 destinationOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 sourceHandle:(id)a7 sourceHandleOffset:(unsigned long long)a8;

@end
