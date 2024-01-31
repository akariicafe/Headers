@class NSString, NSMutableDictionary, NSFileHandle, NSObject;
@protocol OS_dispatch_queue;

@interface VCCannedVideoPacketSource : NSObject {
    unsigned char _mode;
    NSFileHandle *_fileHandle;
    NSString *_filePath;
    struct __CFAllocator { } *_blockBufferHeaderAllocator;
    struct __CFAllocator { } *_rtcpPacketAllocator;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableDictionary *_rtpCallbacks;
    NSMutableDictionary *_rtcpCallbacks;
    struct OpaqueFigThread { } *_cannedReplayThread;
    BOOL _cannedReplayThreadCanceled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _replayMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _replayCondition;
}

+ (BOOL)removeFileAtPath:(id)a0;
+ (BOOL)createFileAtPath:(id)a0;
+ (BOOL)overwriteFileAtPath:(id)a0;

- (void)dealloc;
- (id)initWithMode:(unsigned char)a0 filePath:(id)a1;
- (BOOL)setUpSourceFileWithMode:(unsigned char)a0;
- (int)startCannedInjection;
- (int)stopCannedInjection;

@end
