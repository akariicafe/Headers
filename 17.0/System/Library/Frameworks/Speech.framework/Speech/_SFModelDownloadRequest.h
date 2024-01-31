@class NSProgress, _TtC6Speech20ModelDownloadRequest;

@interface _SFModelDownloadRequest : NSObject {
    _TtC6Speech20ModelDownloadRequest *_modelDownloadRequest;
}

@property (readonly, nonatomic) NSProgress *progress;

- (void).cxx_destruct;
- (void)downloadWithCompletion:(id /* block */)a0;
- (id)initWithModelDownloadRequest:(id)a0;

@end
