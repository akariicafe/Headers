@class QSSStartTextToSpeechStreamingRequest;

@interface QSSMutableTextToSpeechStreamingStreamingRequest : QSSTextToSpeechStreamingStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSStartTextToSpeechStreamingRequest *contentAsQSSStartTextToSpeechStreamingRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
