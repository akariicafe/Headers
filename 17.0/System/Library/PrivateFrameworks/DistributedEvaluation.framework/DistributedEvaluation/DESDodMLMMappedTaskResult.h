@class DESSandBoxManager, DESMMappedFile;

@interface DESDodMLMMappedTaskResult : DESInternalDodMLTaskResult {
    DESSandBoxManager *_sandboxManager;
    DESMMappedFile *_mmappedFile;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithJSONResult:(id)a0 binaryResult:(id)a1 deferred:(BOOL)a2 deferralURL:(id)a3 duration:(double)a4;
- (id)initWithJSONResult:(id)a0 sandboxManager:(id)a1 mmappedFile:(id)a2 duration:(double)a3;

@end
