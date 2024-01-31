@class ICLiveLinkQueueEvent, ICLiveLinkIdentity, ICLiveLinkPlaybackEvent, ICLiveLinkReactionEvent, ICLiveLinkCustomEvent, NSString, ICLiveLinkSessionEvent;

@interface ICLiveLinkEvent : NSObject

@property (readonly, nonatomic) ICLiveLinkIdentity *participant;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) ICLiveLinkSessionEvent *sessionEvent;
@property (readonly, nonatomic) ICLiveLinkPlaybackEvent *playbackEvent;
@property (readonly, nonatomic) ICLiveLinkQueueEvent *queueEvent;
@property (readonly, nonatomic) ICLiveLinkReactionEvent *reactionEvent;
@property (readonly, nonatomic) ICLiveLinkCustomEvent *customEvent;
@property (readonly, copy, nonatomic) NSString *primaryReferencedIdentifier;

+ (id)eventWithCustomEvent:(id)a0 participant:(id)a1;
+ (id)eventWithPlaybackEvent:(id)a0 participant:(id)a1;
+ (id)eventWithQueueEvent:(id)a0 participant:(id)a1;
+ (id)eventWithReactionEvent:(id)a0 participant:(id)a1;
+ (id)eventWithSessionEvent:(id)a0 participant:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithType:(long long)a0 participant:(id)a1;

@end
