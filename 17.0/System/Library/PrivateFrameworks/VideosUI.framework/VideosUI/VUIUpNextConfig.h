@interface VUIUpNextConfig : NSObject

@property (nonatomic) unsigned long long upNextCallDelayAfterMarkAsWatched;
@property (nonatomic) unsigned long long upNextRefreshCallDelayAfterRemoveFromUpNext;
@property (nonatomic) BOOL shouldUpdateOutboundAfterRemoveFromUpNext;

- (id)init;

@end
