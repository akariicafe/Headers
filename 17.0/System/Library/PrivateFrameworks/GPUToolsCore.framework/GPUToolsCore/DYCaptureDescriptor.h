@class NSURL;

@interface DYCaptureDescriptor : NSObject

@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned long long framesToCapture;
@property (nonatomic) unsigned long long triggerFrame;
@property (nonatomic) BOOL suspendAfterCapture;
@property (nonatomic) BOOL lockGraphicsAfterCapture;
@property (nonatomic) BOOL includeBacktraceInFbufs;
@property (nonatomic) BOOL isBoundaryLess;
@property (nonatomic) BOOL unlockGraphicThreadsOnActivateCapture;
@property (nonatomic) BOOL armPreparedCapture;
@property (retain, nonatomic) NSURL *localFilePathURL;
@property (readonly, nonatomic) unsigned long long api;

- (void)dealloc;
- (id)initWithAPI:(unsigned long long)a0;

@end
