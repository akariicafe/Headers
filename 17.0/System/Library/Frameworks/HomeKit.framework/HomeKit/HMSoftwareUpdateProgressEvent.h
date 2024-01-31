@class HMSoftwareUpdateProgress;

@interface HMSoftwareUpdateProgressEvent : HMEEvent

@property (readonly) HMSoftwareUpdateProgress *progress;

- (id)encodedData;
- (void).cxx_destruct;
- (id)initWithProgress:(id)a0 eventSource:(id)a1 eventTimestamp:(double)a2;

@end
