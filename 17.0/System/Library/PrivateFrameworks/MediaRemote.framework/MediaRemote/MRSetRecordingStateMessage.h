@interface MRSetRecordingStateMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int state;

- (unsigned long long)type;
- (id)initWithRecordingState:(unsigned int)a0;

@end
