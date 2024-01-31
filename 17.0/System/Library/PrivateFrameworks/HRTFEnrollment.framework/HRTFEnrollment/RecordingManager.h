@class NSString, MOVWriterInterface;
@protocol RecordingManagerDelegate;

@interface RecordingManager : NSObject <MOVWriterInterfaceDelegate> {
    MOVWriterInterface *_writerInterface;
    NSString *_colorStreamID;
    NSString *_depthStreamID;
}

@property (weak, nonatomic) id<RecordingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)copyBuffer:(struct __CVBuffer { } *)a0 dst:(struct __CVBuffer { } *)a1;
+ (id)movSummaryItem:(float)a0 appName:(id)a1;

- (void)stopRecording;
- (void).cxx_destruct;
- (void)isReadyToRecord;
- (void)didFinishRecording;
- (id)initWithFileURL:(id)a0 expectedFrameRate:(double)a1 colorStreamId:(id)a2 depthStreamId:(id)a3 appName:(id)a4;
- (BOOL)process:(struct __CVBuffer { } *)a0 depthFrame:(struct __CVBuffer { } *)a1 faceObject:(id)a2 timestamp:(double)a3 intrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a4 calibration:(id)a5 exposureTime:(double)a6;

@end
