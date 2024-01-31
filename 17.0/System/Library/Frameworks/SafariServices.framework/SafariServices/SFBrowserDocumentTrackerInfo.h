@class NSSet, WBSQueryParameterFilteringDataQueue, NSDate;
@protocol _SFBrowserDocument;

@interface SFBrowserDocumentTrackerInfo : NSObject {
    BOOL _cachedTrackingPreventionEnabled;
    NSDate *_lastNavigationCommitDate;
}

@property (class, readonly, nonatomic) BOOL trackingPreventionEnabled;

@property (readonly, weak, nonatomic) id<_SFBrowserDocument> document;
@property (readonly, nonatomic) NSSet *allowedKnownTrackingThirdParties;
@property (readonly, nonatomic) NSSet *blockedKnownTrackingThirdParties;
@property (readonly, nonatomic) NSSet *preventedKnownTrackingThirdParties;
@property (readonly, nonatomic) WBSQueryParameterFilteringDataQueue *queryParameterFilteringDataQueue;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (void)_flushKnownTrackingThirdParties;
- (void)_resetKnownTrackingThirdParties;
- (void)_updateKnownTrackingThirdPartiesWithCompletionHandler:(id /* block */)a0;
- (void)documentDidCommitNavigation;
- (void)updateKnownTrackingThirdPartiesWithCompletionHandler:(id /* block */)a0;

@end
