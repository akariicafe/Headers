@class NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface SREMusicRetrieval : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ candidatesHandler;
@property (copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)retrieveMusicWithQuery:(id)a0 queryID:(unsigned long long)a1;
- (void)_callCompletionHandler:(id)a0;
- (void)_callMetadataEndpointWithAdamIDs:(id)a0 queryIntent:(id)a1;
- (id)_parseQueryString:(id)a0;
- (id)_removeRecentlyPlayedCandidateAdamIDs:(id)a0 recentPlayed:(id)a1;
- (id)initWithLocale:(id)a0 queue:(id)a1 error:(id *)a2;
- (BOOL)isMusicRecEligible:(id)a0;

@end
