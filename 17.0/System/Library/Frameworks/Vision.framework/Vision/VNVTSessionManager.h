@interface VNVTSessionManager : NSObject {
    struct unique_ptr<SessionsHandler<VNVTPixelTransferSession>, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { struct __compressed_pair<SessionsHandler<VNVTPixelTransferSession> *, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { void *__value_; } __ptr_; } _pixelTransferSessionsHandler;
    struct unique_ptr<SessionsHandler<VNVTPixelRotationSession>, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> { struct __compressed_pair<SessionsHandler<VNVTPixelRotationSession> *, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> { void *__value_; } __ptr_; } _pixelRotationSessionsHandler;
    unsigned long long _maxSessionsCount;
}

- (id)init;
- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
