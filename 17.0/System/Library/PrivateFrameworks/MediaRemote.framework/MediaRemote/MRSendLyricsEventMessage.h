@class _MRLyricsEventProtobuf;

@interface MRSendLyricsEventMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRLyricsEventProtobuf *event;

- (id)initWithEvent:(id)a0;
- (unsigned long long)type;

@end
