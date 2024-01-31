@class NSString, NSArray;

@interface LiveSpeechServices : NSObject <AXUIClientDelegate> {
    void /* unknown type, empty encoding */ _client;
    void /* unknown type, empty encoding */ $__lazy_storage_$_liveSpeechDefaults;
}

@property (class, nonatomic, readonly) LiveSpeechServices *shared;

@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *phraseTextKey;
@property (nonatomic, readonly) NSString *phraseShortcutKey;
@property (nonatomic, readonly) NSArray *favoritePhrases;

- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (id)userInterfaceClient:(id)a0 accessQueueForProcessingMessageWithIdentifier:(long long)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)startLiveSpeechAndReturnError:(id *)a0;
- (BOOL)stopLiveSpeechAndReturnError:(id *)a0;
- (void)addFavoritePhrase:(id)a0;
- (id)observeFavoritePhrasesChanges:(id /* block */)a0;
- (void)removeFavoritePhrase:(id)a0;

@end
