@class NSObject;
@protocol SPRInstallDelegate, OS_dispatch_queue;

@interface SPRInstallRelay : NSObject <SPRInstallDelegate>

@property (readonly) id<SPRInstallDelegate> base;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithBase:(id)a0 queue:(id)a1;
- (void)onFailureWithError:(id)a0;
- (void)onSuccessWithInstallData:(id)a0;
- (void)onUpdateWithEvent:(long long)a0;
- (void)onUpdateWithEvent:(long long)a0 progress:(long long)a1;

@end
