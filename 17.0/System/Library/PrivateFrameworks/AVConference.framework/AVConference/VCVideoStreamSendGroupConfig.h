@class VCSessionUplinkVideoStreamController;

@interface VCVideoStreamSendGroupConfig : VCMediaStreamSendGroupConfig {
    int _captureSource;
}

@property (retain, nonatomic) VCSessionUplinkVideoStreamController *uplinkVideoStreamController;

- (void)dealloc;
- (int)captureSource;
- (void)setCaptureSource:(int)a0;

@end
