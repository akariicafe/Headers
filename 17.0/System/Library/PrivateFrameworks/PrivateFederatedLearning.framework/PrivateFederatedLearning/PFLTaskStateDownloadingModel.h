@class NSData, NSURLSessionDownloadTask;

@interface PFLTaskStateDownloadingModel : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *resumeData;
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask;

- (id)init;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)tag;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
