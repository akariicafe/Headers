@class _ICResultCache, NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface _ICPredictionManager : NSObject <_ICPredictionManaging, _ICFeedbackAccepting> {
    NSArray *_predictionSources;
    NSString *_lastUsedSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) _ICResultCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)warmUp;
- (void)hibernate;
- (id)_quickTypePredictionWithTrigger:(id)a0 searchContext:(id)a1 timeoutInMilliseconds:(unsigned long long)a2 error:(id *)a3;
- (void)reset;
- (id)searchForMeCardRegions;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)workLocation;
- (id)searchForMeCardEmailAddresses;
- (void)predictedItemSelected:(id)a0;
- (id)searchWithTrigger:(id)a0 searchContext:(id)a1 timeoutInMilliseconds:(int)a2 error:(id *)a3;
- (void)setLastUsedSource:(id)a0;
- (void).cxx_destruct;
- (id)lastCachedResultWithInitialCharacters:(id)a0;
- (id)searchWithTriggers:(id)a0 application:(id)a1 recipient:(id)a2 localeIdentifier:(id)a3 timeoutInMilliseconds:(int)a4 resultLimit:(int)a5 error:(id *)a6;
- (void)providePredictionFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)searchWithTriggers:(id)a0 application:(id)a1 recipient:(id)a2 localeIdentifier:(id)a3 isResponseDenyListed:(BOOL)a4 shouldDisableAutoCaps:(BOOL)a5 timeoutInMilliseconds:(int)a6 resultLimit:(int)a7 error:(id *)a8;
- (id)initWithPredictionSources:(id)a0;

@end
