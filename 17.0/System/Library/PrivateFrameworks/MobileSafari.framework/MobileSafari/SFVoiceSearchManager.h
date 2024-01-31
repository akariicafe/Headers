@class NSArray;

@interface SFVoiceSearchManager : NSObject

@property (class, readonly, nonatomic) SFVoiceSearchManager *sharedManager;

@property (readonly, nonatomic) long long availability;
@property (readonly, nonatomic) BOOL liveCompletionList;
@property (readonly, nonatomic) NSArray *queryItems;

- (id)init;
- (id)_kfed;
- (void)_updateDictationAvailability;
- (long long)_voiceSearchAvailability;
- (BOOL)presentDictationDiscoveryAlertIfNeeded;

@end
