@class SFWebProcessPlugInCertificateWarningController, NSString, NSDictionary, _SFReaderWebProcessPlugInPageController, _WKRemoteObjectInterface, SFWebProcessPlugInPageExtensionController, _SFWebProcessSharingLinkExtractor;
@protocol SFReaderEventsListener, SFAppBannerMetaTagContentObserver;

@interface _SFWebProcessPlugInReaderEnabledPageController : _SFWebProcessPlugInAutoFillPageController <SFReaderWebProcessControllerProtocol> {
    struct unique_ptr<SafariServices::ReaderAvailabilityController, std::default_delete<SafariServices::ReaderAvailabilityController>> { struct __compressed_pair<SafariServices::ReaderAvailabilityController *, std::default_delete<SafariServices::ReaderAvailabilityController>> { struct ReaderAvailabilityController *__value_; } __ptr_; } _readerAvailabilityController;
    _WKRemoteObjectInterface *_availabilityControllerInterface;
    id<SFReaderEventsListener> _readerActivityListenerProxy;
    NSDictionary *_initialScrollPositionAsDictionary;
    SFWebProcessPlugInPageExtensionController *_extensionController;
    _SFWebProcessSharingLinkExtractor *_sharingLinkExtractor;
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
    id<SFAppBannerMetaTagContentObserver> _appBannerObserverProxy;
}

@property (retain, nonatomic) _SFReaderWebProcessPlugInPageController *readerPageController;
@property (copy, nonatomic) NSDictionary *initalArticleScrollPositionAsDictionary;
@property (nonatomic) long long cachedReaderTopScrollOffset;
@property (readonly, nonatomic) NSDictionary *initialReaderConfiguration;
@property (readonly, nonatomic, getter=isViewingReadingListArchive) BOOL viewingReadingListArchive;
@property (readonly, nonatomic) BOOL readerHasBeenActivatedRecently;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectArticleContent;
- (void)didSetReaderConfiguration:(id)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (void)checkReaderAvailability;
- (id).cxx_construct;
- (void)didDetermineReaderAvailability:(id)a0;
- (id)initWithPlugIn:(id)a0 contextController:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 willInjectUserScriptForFrame:(id)a1 inScriptWorld:(id)a2;
- (void)setConfiguration:(id)a0;
- (void)didDetermineAdditionalTextSamples:(id)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishDocumentLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 globalObjectIsAvailableForFrame:(id)a1 inScriptWorld:(id)a2;
- (void)activateFont:(id)a0;
- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)a0 didCommitLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)willDestroyBrowserContextController:(id)a0;
- (void)setReaderInitialTopScrollOffset:(long long)a0 configuration:(id)a1 isViewingArchive:(BOOL)a2;
- (void)webProcessPlugInBrowserContextController:(id)a0 renderingProgressDidChange:(unsigned long long)a1;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)setReaderIsActive:(BOOL)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 didSameDocumentNavigation:(long long)a1 forFrame:(id)a2;
- (void)_setUpReaderControllerInterface;
- (void)prepareReaderContentForPrinting;
- (void)_clearReaderControllerInterface;
- (void)readerTextWasExtracted:(id)a0 withMetadata:(id)a1 wasDeterminingAvailability:(BOOL)a2;
- (id)_appBannerMetaElementInHeaderElement:(id)a0;
- (id)_appBannerMetaTagObserverProxy;
- (void)_detectAvailabilityAfterDelay:(double)a0 loadEvent:(int)a1;
- (void)_detectReaderAvailabilityAfterSameDocumentNavigation;
- (id)_searchForSmartAppBannerMetaContent;
- (void)_setUpReaderActivityListenerProxy;
- (void)articleContentDidChange;
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(id)a0;
- (void)didCreateReaderPageContextHandle:(id)a0;
- (void)loadNewReaderArticle;
- (struct OpaqueJSValue { } *)originalArticleFinder;
- (void)prepareToTransitionToReader;
- (void)readerContentDidBecomeReadyWithArticleText:(id)a0;
- (void)setArticleLocale:(id)a0;

@end
