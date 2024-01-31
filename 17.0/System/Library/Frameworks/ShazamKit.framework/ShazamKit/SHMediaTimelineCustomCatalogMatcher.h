@class NSUUID, NSString, SHCustomCatalogMatcher, SHMediaTimeline;
@protocol SHMatcherDelegate;

@interface SHMediaTimelineCustomCatalogMatcher : NSObject <SHMatcherDelegate, SHMediaTimelineDelegate, SHMatcher>

@property (retain, nonatomic) SHMediaTimeline *contextTimeline;
@property (retain, nonatomic) SHCustomCatalogMatcher *customCatalogMatcher;
@property (retain, nonatomic) NSUUID *timelineRequestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SHMatcherDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopRecognition;
- (void)callDelegateWithSyntheticMatchForResponse:(id)a0;
- (id)initWithCustomCatalog:(id)a0;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (void)mediaTimeline:(id)a0 hasUpdatedInScopeMediaItems:(id)a1;
- (void)restartTimelineWithMediaItems:(id)a0;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;

@end
