@class CFPDSource;

@interface CFPDMirroredSource : CFPDSource {
    struct __CFSet { } *_mirroredKeys;
    CFPDSource *_mirrorSource;
}

- (void)dealloc;
- (void)drainPendingChanges;
- (void)clearCacheForReason:(struct __CFString { } *)a0;
- (void)lock;
- (BOOL)enqueueNewKey:(id)a0 value:(id)a1 encoding:(int)a2 inBatch:(BOOL)a3 fromMessage:(id)a4;
- (void)unlock;
- (id /* block */)createDiskWrite;
- (id)initWithDomain:(struct __CFString { } *)a0 userName:(struct __CFString { } *)a1 byHost:(BOOL)a2 managed:(BOOL)a3 mirroredKeys:(struct __CFArray { } *)a4 shmemIndex:(short)a5 daemon:(id)a6;
- (void)handleWritingResult:(struct __CFDictionary { } *)a0;
- (id)acceptMessage:(id)a0;
- (int)cacheFileInfoForWriting:(BOOL)a0 euid:(unsigned int)a1 egid:(unsigned int)a2 didCreate:(BOOL *)a3;

@end
