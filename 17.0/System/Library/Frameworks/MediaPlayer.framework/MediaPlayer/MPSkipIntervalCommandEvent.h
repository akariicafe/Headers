@interface MPSkipIntervalCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) double interval;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
