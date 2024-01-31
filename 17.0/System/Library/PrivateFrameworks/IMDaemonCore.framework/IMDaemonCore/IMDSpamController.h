@class NSMutableDictionary;

@interface IMDSpamController : NSObject

@property (retain) NSMutableDictionary *chatGUIDToSpamCheckTimerMap;
@property (retain) NSMutableDictionary *chatGUIDToCountMap;
@property (nonatomic) double spamExtensionCutoffTime;

+ (id)sharedInstance;

- (id)chatRegistry;
- (id)init;
- (void)dealloc;
- (BOOL)_isDisabled;
- (void)__queryServerForID:(id)a0 count:(id)a1 completion:(id /* block */)a2;
- (void)_spamCheckTimerFired:(id)a0;
- (void)_updateSpamCheckTimerWithInterval:(double)a0 forChatGUID:(id)a1;
- (void)checkForSpamWithExtensionInChat:(id)a0 forMessageBody:(id)a1 sender:(id)a2 withCompletion:(id /* block */)a3;
- (void)detectSpam:(id)a0 chatGUID:(id)a1;
- (BOOL)shouldCheckForSpamWithExtensionInChat:(id)a0 fromIdentifier:(id)a1 toIdentifier:(id)a2;

@end
