@class GTCaptureDescriptor, GTCaptureProgressStatistics, GTCaptureCompletionState;

@interface GTCaptureProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long captureState;
@property (retain, nonatomic) GTCaptureDescriptor *descriptor;
@property (retain, nonatomic) GTCaptureCompletionState *completionState;
@property (retain, nonatomic) GTCaptureProgressStatistics *stats;
@property (nonatomic) unsigned long long capturedCommandsBuffers;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
