@class NSCache, NSString, SLDServiceProxy, NSArray, SLHighlightCenter, NSObject;
@protocol OS_dispatch_queue, SWHighlightCenterDelegate;

@interface SWHighlightCenter : NSObject <SLHighlightCenterAPIAdapting, SLDServiceProxyDelegate>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *shareURLFetchQueue;
@property (class, readonly, nonatomic) NSString *highlightCollectionTitle;
@property (class, readonly, nonatomic, getter=isSystemCollaborationSupportAvailable) BOOL systemCollaborationSupportAvailable;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_highlightArrayQueue;
@property (readonly, nonatomic) SLHighlightCenter *_highlightCenterAdapter;
@property (retain, nonatomic) NSCache *urlToHighlightCache;
@property (retain, nonatomic) NSCache *urlToCollaborationHighlightCache;
@property (retain, nonatomic) NSCache *supplementaryURLToCollaborationHighlightCache;
@property (retain, nonatomic) NSCache *identifierToCollaborationHighlightCache;
@property (retain, nonatomic) NSCache *fileURLToShareURLCache;
@property (retain, nonatomic) SLDServiceProxy *noticeServiceProxy;
@property (retain, nonatomic) NSCache *pendingEventCache;
@property (retain, nonatomic) NSCache *pendingClearCache;
@property (retain, nonatomic) SLDServiceProxy *cloudDocsServiceProxy;
@property (readonly, nonatomic) double highlightsRankingScore;
@property (retain, nonatomic) NSString *variant;
@property (weak, nonatomic) id<SWHighlightCenterDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *highlights;

+ (BOOL)isEnabled;
+ (id)SWVariantDefault;
+ (id)SWVariantNewsToday;
+ (id)noticeHandlerQueue;
+ (id)signingQueue;

- (void)getHighlightForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)_processClearNoticesFor:(id)a0;
- (void)postNoticeForHighlightEvent:(id)a0;
- (void)apiAdapterHighlightsDidChange:(id)a0;
- (void)getSignedIdentityProofForCollaborationHighlight:(id)a0 usingData:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAppIdentifier:(id)a0;
- (id)fetchAttributionForAttributionIdentifier:(id)a0;
- (void)_getShareURLForFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendCurrentNoticesToDaemonAndDisconnect;
- (void)_postNoticeForHighlightEvent:(id)a0;
- (id)_sandboxExtensionIssueFileURL:(id)a0 withAuditToken:(struct { unsigned int x0[8]; })a1;
- (void)_processPendingHighlightEvent:(id)a0;
- (void)_sendCurrentClearNoticesToDaemonAndDisconnect;
- (void)clearNoticesForHighlight:(id)a0;
- (void)_disconnectNoticeServiceConnectionIfNecessary;
- (id)highlightForURL:(id)a0 error:(id *)a1;
- (id)_fetchHighlightFromAnyCacheForURL:(id)a0;
- (void).cxx_destruct;
- (void)_notifyDelegateHighlightsDidChange;
- (void)getCollaborationHighlightForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)originalSenderForCollaborationHighlight:(id)a0;
- (id)_attributionIdentifiersForHighlight:(id)a0;
- (id)fetchAttributionsForHighlight:(id)a0;
- (id)collaborationHighlightForURL:(id)a0 error:(id *)a1;
- (id)getShareURLForFileURL:(id)a0;
- (void)_getCollaborationHighlightForShareURL:(id)a0 fileURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)collaborationHighlightForIdentifier:(id)a0 error:(id *)a1;
- (void)postNoticeForEvent:(id)a0;
- (void)serviceProxyDidDisconnect:(id)a0;
- (void)serviceProxyDidConnect:(id)a0;

@end
