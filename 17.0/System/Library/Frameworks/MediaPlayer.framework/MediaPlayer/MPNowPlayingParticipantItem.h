@class NSString, MRContentItem, MRUserIdentity;

@interface MPNowPlayingParticipantItem : NSObject

@property (readonly, nonatomic) MRContentItem *mediaRemoteContentItem;
@property (readonly, nonatomic) MRUserIdentity *mediaRemoteUserIdentity;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) long long participantIdentifierType;
@property (copy, nonatomic) NSString *participantIdentifier;
@property (copy, nonatomic) NSString *displayName;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithMediaRemoteContentItem:(id)a0;
- (void)_postParticipantItemChangedNotificationWithDeltaBlock:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 mediaRemoteUserIdentity:(id)a1;
- (id)initWithMediaRemoteUserIdentity:(id)a0;

@end
