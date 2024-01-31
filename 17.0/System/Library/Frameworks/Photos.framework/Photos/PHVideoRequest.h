@class PHVideoResult, PHImageDisplaySpec, PHVideoRequestBehaviorSpec;

@interface PHVideoRequest : PHMediaRequest {
    PHVideoResult *_videoResult;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) PHImageDisplaySpec *displaySpec;
@property (readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec;

- (BOOL)isSynchronous;
- (long long)downloadPriority;
- (long long)downloadIntent;
- (void)_finish;
- (void).cxx_destruct;
- (void)startRequest;
- (BOOL)isNetworkAccessAllowed;
- (void)_handleResultVideoURL:(id)a0 mediaItemMakerData:(id)a1 fingerPrint:(id)a2 info:(id)a3 error:(id)a4;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 displaySpec:(id)a5 behaviorSpec:(id)a6 delegate:(id)a7;

@end
