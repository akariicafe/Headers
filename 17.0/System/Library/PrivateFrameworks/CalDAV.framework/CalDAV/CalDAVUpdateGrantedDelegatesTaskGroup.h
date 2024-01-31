@class NSSet, CalDAVGetGrantedDelegatesTaskGroup, NSString;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>

@property (nonatomic) int state;
@property (retain, nonatomic) NSSet *addWriteURLs;
@property (retain, nonatomic) NSSet *addReadURLs;
@property (retain, nonatomic) NSSet *removeURLs;
@property (retain, nonatomic) NSSet *updatedWriteURLs;
@property (retain, nonatomic) NSSet *updatedReadURLs;
@property (retain, nonatomic) CalDAVGetGrantedDelegatesTaskGroup *getGrantedDelegatesTaskGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTaskGroup;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)propPatchTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (void)_updateDelegatesWithAllowWrite:(BOOL)a0;
- (void)_fetchExistingGrantedDelegates;
- (void)_populateUpdatesFromFetched:(id)a0 allowWrite:(BOOL)a1;
- (id)initWithAccountInfoProvider:(id)a0 addWriteURLs:(id)a1 addReadURLs:(id)a2 removeURLs:(id)a3 taskManager:(id)a4;

@end
