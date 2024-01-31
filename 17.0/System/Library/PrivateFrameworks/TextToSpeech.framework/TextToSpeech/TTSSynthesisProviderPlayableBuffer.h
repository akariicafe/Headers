@class AVAudioPCMBuffer;

@interface TTSSynthesisProviderPlayableBuffer : NSObject

@property (nonatomic) unsigned int startFrameOffset;
@property (readonly, nonatomic) unsigned int endFrameOffset;
@property (retain, nonatomic) AVAudioPCMBuffer *buffer;

- (void).cxx_destruct;

@end
