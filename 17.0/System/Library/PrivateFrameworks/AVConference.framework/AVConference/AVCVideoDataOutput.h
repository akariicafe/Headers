@class VideoAttributes, NSString, AVCStreamOutput, AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCVideoDataOutput : NSObject <AVCStreamOutputDelegate> {
    AVCStreamOutput *_streamOutput;
    AVConferenceXPCClient *_connection;
}

@property (nonatomic) BOOL isVideoPaused;
@property (nonatomic) BOOL isMediaStalled;
@property (nonatomic) BOOL isVideoDegraded;
@property (nonatomic) BOOL isVideoSuspended;
@property (nonatomic) BOOL isValid;
@property (nonatomic) id delegate;
@property (nonatomic) struct { VideoAttributes *videoAttributes; } videoAttributes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalReceiverQueue;
@property (readonly, nonatomic) long long streamToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStreamToken:(long long)a0 delegate:(id)a1 queue:(id)a2 error:(id *)a3;
- (BOOL)parseVideoAttributes:(struct opaqueCMSampleBuffer { } *)a0;
- (void)streamOutput:(id)a0 didDegrade:(BOOL)a1;
- (void)streamOutput:(id)a0 didPause:(BOOL)a1;
- (void)streamOutput:(id)a0 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)streamOutput:(id)a0 didStall:(BOOL)a1;
- (void)streamOutput:(id)a0 didSuspend:(BOOL)a1;
- (void)streamOutputDidBecomeInvalid:(id)a0;
- (void)streamOutputServerDidDie:(id)a0;

@end
