@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _UINewCGImageDecompressor : _UICGImageDecompressor {
    struct CMPhotoDecompressionContainer { } *_container;
    id _imageOrError;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_semaphore> *_sema;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    struct { unsigned char started : 1; unsigned char finished : 1; unsigned char error : 1; } _flags;
}

+ (struct CMPhotoDecompressionSession { } *)_sharedDecompressionSession;

- (id)init;
- (void)dealloc;
- (struct CGImage { } *)waitForImageRef;
- (void)_finishDecompressingWithImage:(struct CGImage { } *)a0 error:(id)a1;
- (void).cxx_destruct;

@end
