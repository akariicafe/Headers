@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface FMDFMIPSharedStateManager : NSObject

@property (retain) NSURL *fmipSharedFileStaticURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateManagerQueue;

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)lostModeType;
- (BOOL)_writeSharedInfo:(id)a0;
- (void)recalculateLostMode;
- (BOOL)fmipActive;
- (void).cxx_destruct;
- (id)_readSharedInfo;
- (void)setFMiPActive:(BOOL)a0;
- (id)_fmipSharedFileURL;
- (BOOL)_removeSharedInfo;

@end
