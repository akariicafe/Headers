@class VCMediaStream, NSMutableArray;

@interface VCSessionParticipantMediaStreamInfo : NSObject

@property (retain, nonatomic) VCMediaStream *stream;
@property (readonly, nonatomic) NSMutableArray *streamConfigs;
@property (readonly, nonatomic) BOOL isOneToOneSupported;

- (id)init;
- (void)dealloc;
- (void)addStreamConfig:(id)a0;

@end
