@class NSNumber;

@interface MPVocalsControlCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSNumber *active;
@property (readonly, nonatomic) NSNumber *level;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
