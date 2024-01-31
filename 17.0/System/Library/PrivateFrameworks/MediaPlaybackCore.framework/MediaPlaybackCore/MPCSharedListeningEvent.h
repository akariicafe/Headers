@class MPCSharedListeningPlaybackEvent, MPCSharedListeningEventParticipant, MPCSharedListeningSessionEvent, MPCSharedListeningReactionEvent, MPCSharedListeningQueueEvent, MPCSharedListeningCustomEvent;

@interface MPCSharedListeningEvent : NSObject

@property (readonly, nonatomic) MPCSharedListeningEventParticipant *participant;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) MPCSharedListeningSessionEvent *sessionEvent;
@property (readonly, nonatomic) MPCSharedListeningPlaybackEvent *playbackEvent;
@property (readonly, nonatomic) MPCSharedListeningQueueEvent *queueEvent;
@property (readonly, nonatomic) MPCSharedListeningReactionEvent *reactionEvent;
@property (readonly, nonatomic) MPCSharedListeningCustomEvent *customEvent;

+ (id)eventWithCustomEvent:(id)a0 participant:(id)a1;
+ (id)eventWithPlaybackEvent:(id)a0 participant:(id)a1;
+ (id)eventWithQueueEvent:(id)a0 participant:(id)a1;
+ (id)eventWithReactionEvent:(id)a0 participant:(id)a1;
+ (id)eventWithSessionEvent:(id)a0 participant:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithType:(long long)a0 participant:(id)a1;

@end
