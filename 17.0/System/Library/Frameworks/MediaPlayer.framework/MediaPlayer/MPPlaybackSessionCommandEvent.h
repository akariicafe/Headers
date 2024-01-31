@class NSString;

@interface MPPlaybackSessionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *revision;
@property (readonly, nonatomic) long long priority;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
