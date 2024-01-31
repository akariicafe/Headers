@class NSString, NSMutableDictionary, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OUFrame;

@interface OUInternalInfoDumper : NSObject {
    NSObject<OS_dispatch_queue> *_save_queue;
    NSObject<OS_dispatch_group> *_save_group;
    NSString *_loggingDirectory;
    NSMutableArray *_keyframesDebug;
    NSMutableArray *_floorPlanDebug;
    NSMutableArray *_coachingDebug;
    NSMutableArray *_driftDebug;
    NSMutableArray *_sysDebug;
    double _firstARFrameTime;
    NSDate *_lastKeyframeTime;
    NSMutableDictionary *_keyframeMeta;
    double _maxKeyframeFPS;
    id<OUFrame> _lastARFrame;
    struct { void /* unknown type, empty encoding */ columns[4]; } _lastCameraPose;
}

@property (nonatomic) BOOL enableARFrameDump;
@property (nonatomic) BOOL enableLiveDump;
@property (nonatomic) BOOL enableARFrameRGB;
@property (nonatomic) BOOL enableARFrameDepth;

+ (id)serailizeARFrameMeta:(id)a0;

- (id)init;
- (void)reset;
- (void)createDirectory:(id)a0;
- (void).cxx_destruct;
- (void)setUpInternalDumpWithLogDir:(id)a0 enable:(BOOL)a1;
- (id)encodeDepthPng:(struct __CVBuffer { } *)a0;
- (void)dumpARFrame:(id)a0 withKeyFrames:(id)a1 withCameraPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (void)dumpLastARFrameImage;
- (void)dumpObjects:(id)a0;
- (id)encodePng:(struct __CVBuffer { } *)a0;
- (id)encodeRGBPng:(struct __CVBuffer { } *)a0 withWidth:(unsigned long long)a1 Height:(unsigned long long)a2;
- (id)getDebugInfoWithConfig:(id)a0 OnlineDebug:(id)a1;
- (void)logKeyFrame:(id)a0 WithSkip:(BOOL)a1;
- (void)logMemory:(unsigned long long)a0;
- (void)setFirstARFrame:(id)a0;
- (void)setLastARFrame:(id)a0 withCameraPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
