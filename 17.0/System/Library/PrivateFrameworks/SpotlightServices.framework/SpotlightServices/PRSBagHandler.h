@class PARBag, NSString, NSArray, NSSet, NSMutableDictionary, GEOUserSessionEntity, NSObject, SSPlistDataReader, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group, PRSSessionController;

@interface PRSBagHandler : NSObject {
    BOOL _waitingForLocation;
    NSObject<OS_dispatch_group> *_locationGroup;
    id _lockObject;
    NSMutableArray *_tasks;
    PARBag *_bag;
    NSObject<OS_dispatch_queue> *_bagQueue;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableDictionary *resourceMetadata;
@property (nonatomic) BOOL resourceMetadataNeedsWrite;
@property (retain, nonatomic) NSString *resourceMetadataPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceFetchQueue;
@property (weak) id<PRSSessionController> client;
@property (nonatomic) BOOL active;
@property double searchRenderTimeout;
@property double suggestionsRenderTimeout;
@property (retain) SSPlistDataReader *cep_server_values;
@property (retain, nonatomic) NSSet *appBlocklist;
@property (retain, nonatomic) NSArray *enabledDomains;
@property (nonatomic) BOOL disableAsTypedSuggestion;
@property (nonatomic) BOOL collectAnonymousData;
@property (nonatomic) BOOL collectScores;
@property (retain) NSArray *anonymousMetadataUndesiredBundleIDs;
@property (nonatomic) BOOL use2LayerRanking;
@property (retain, nonatomic) NSString *fteLocString;
@property (retain, nonatomic) NSString *fteLearnMoreString;
@property (retain, nonatomic) NSString *fteContinueString;
@property (retain, nonatomic) NSArray *suggestionRankerModelParams;
@property (readonly, nonatomic) NSString *lookupFirstUseDescription1;
@property (readonly, nonatomic) NSString *lookupFirstUseDescription2;
@property (readonly, nonatomic) NSString *lookupFirstUseLearnMore;
@property (readonly, nonatomic, getter=isBagEnabled) BOOL bagEnabled;
@property (readonly) GEOUserSessionEntity *geoUserSessionEntity;

+ (void)initialize;
+ (id)sharedHandler;

- (id)excludedDomainIdentifiers;
- (id)supportedServices;
- (id)userId;
- (id)init;
- (void)updateFromSession:(id)a0 bag:(id)a1 forClient:(id)a2 error:(id)a3;
- (void)parseCEPFromData:(id)a0 forClient:(id)a1;
- (BOOL)searchSupported:(BOOL)a0;
- (void)activate;
- (id)_base64CEPDataNoCopyFromFeatureData:(id)a0;
- (void)refreshGUID;
- (BOOL)isEnabled;
- (void)getFTEStringsWithReply:(id /* block */)a0;
- (void)removeTask:(id)a0;
- (BOOL)sessionReady;
- (void)updateWithBagDictionary:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (BOOL)isLocaleSupported:(id)a0;
- (id)applicationNameForUserAgent;
- (void)triggerTaskWhenReady:(id)a0;
- (void)fetchModifiedResourceFromSession:(id)a0 resource:(id)a1 completion:(id /* block */)a2;
- (void)deactivate;
- (void)_processQIFeatures:(id)a0 forClient:(id)a1;

@end
