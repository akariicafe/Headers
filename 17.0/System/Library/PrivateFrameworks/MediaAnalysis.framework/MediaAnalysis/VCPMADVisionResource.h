@class VNSession, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADVisionResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VNSession *_session;
}

@property (readonly, nonatomic) VNSession *session;

- (void)purge;
- (id)init;
- (void).cxx_destruct;

@end
