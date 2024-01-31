@class NSString, SVXDeviceSetupFlowDisplayKeyFrame;

@interface _SVXDeviceSetupFlowDisplayKeyFrameMutation : NSObject <SVXDeviceSetupFlowDisplayKeyFrameMutating> {
    SVXDeviceSetupFlowDisplayKeyFrame *_baseModel;
    long long _keyFrameID;
    NSString *_text;
    double _offset;
    double _duration;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasKeyFrameID : 1; unsigned char hasText : 1; unsigned char hasOffset : 1; unsigned char hasDuration : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setOffset:(double)a0;
- (id)generate;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setKeyFrameID:(long long)a0;

@end
