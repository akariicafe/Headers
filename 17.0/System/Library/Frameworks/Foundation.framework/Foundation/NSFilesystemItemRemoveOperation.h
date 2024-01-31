@class NSString, NSFileManager, NSError;

@interface NSFilesystemItemRemoveOperation : NSOperation {
    NSString *_removePath;
    NSError *_error;
    void *_state;
}

@property (readonly) NSFileManager *fileManager;

+ (id)_errorWithErrno:(int)a0 atPath:(id)a1;
+ (id)filesystemItemRemoveOperationWithPath:(id)a0 fileManager:(id)a1;

- (void)dealloc;
- (void)_setError:(id)a0;
- (void)main;
- (id)initWithPath:(id)a0 fileManager:(id)a1;
- (BOOL)_delegateSaysProceedAfterError:(id)a0 removingItemAtPath:(id)a1;
- (BOOL)_delegateSaysShouldRemoveItemAtPath:(id)a0;
- (id)error;

@end
