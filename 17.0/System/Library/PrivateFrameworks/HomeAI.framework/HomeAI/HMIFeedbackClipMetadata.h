@class NSDictionary;

@interface HMIFeedbackClipMetadata : HMFObject

@property (readonly) NSDictionary *clipMetadata;
@property (readonly) NSDictionary *cameraMetadata;
@property (readonly) NSDictionary *homeMetadata;

- (void).cxx_destruct;
- (id)initWithClipMetadata:(id)a0 cameraMetadata:(id)a1 homeMetadata:(id)a2;

@end
