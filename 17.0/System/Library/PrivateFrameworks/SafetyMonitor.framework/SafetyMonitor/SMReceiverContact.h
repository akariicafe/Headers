@class SMCache, SMReceiverSessionStatus;

@interface SMReceiverContact : SMContact

@property (retain, nonatomic) SMCache *phoneCache;
@property (retain, nonatomic) SMCache *watchCache;
@property (retain, nonatomic) SMReceiverSessionStatus *sessionStatus;
@property (nonatomic) long long numCacheDownloads;
@property (nonatomic) long long numSuccessfulCacheDownloads;
@property (nonatomic) long long maxPhoneCacheSize;
@property (nonatomic) long long maxWatchCacheSize;
@property (nonatomic) long long maxLocationsInPhoneCacheTrace;
@property (nonatomic) long long maxLocationsInWatchCacheTrace;
@property (nonatomic) double timeTillCacheRelease;
@property (nonatomic) double timeTillFirstSuccessfulCacheDownload;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 syncDate:(id)a1 phoneCache:(id)a2 watchCache:(id)a3 sessionStatus:(id)a4 allowReadToken:(id)a5 safetyCacheKey:(id)a6 shareURL:(id)a7 participantID:(id)a8 sharingInvitationData:(id)a9 numCacheDownloads:(long long)a10 numSuccessfulCacheDownloads:(long long)a11 maxPhoneCacheSize:(long long)a12 maxWatchCacheSize:(long long)a13 maxLocationsInPhoneCacheTrace:(long long)a14 maxLocationsInWatchCacheTrace:(long long)a15 timeTillCacheRelease:(double)a16 timeTillFirstSuccessfulCacheDownload:(double)a17 sessionID:(id)a18;

@end
