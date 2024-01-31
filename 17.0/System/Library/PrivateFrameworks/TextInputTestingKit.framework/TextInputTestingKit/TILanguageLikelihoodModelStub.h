@class NSString;

@interface TILanguageLikelihoodModelStub : NSObject <TILanguageLikelihoodModeling>

@property (nonatomic) unsigned long long emojiUsageCount;
@property (nonatomic) double emojiLastUsageTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEvidence:(id)a0 timestamp:(double)a1 adaptationType:(int)a2 forRecipient:(id)a3 app:(id)a4 language:(id)a5;
- (unsigned long long)emojiUsageCountForApp:(id)a0 lastEmojiCountUpdateTime:(double *)a1;
- (double)lastOfflineAdaptationTimeForApp:(id)a0;
- (id)rankedLanguagesForRecipient:(id)a0;
- (void)priorProbabilityForLanguages:(id)a0 recipient:(id)a1 handler:(id /* block */)a2;

@end
