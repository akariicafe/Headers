@class NSSet, BPSPublisher, NSDate, NSURL;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol, BMBookmarkablePublisher;

@interface ATXProactiveSuggestionUIFeedbackQuery : NSObject

@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *uiPublisher;
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *blendingModelPublisher;
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *contextPublisher;
@property (retain, nonatomic) id<ATXUniversalBlendingLayerHyperParametersProtocol> hyperParameters;
@property (readonly, nonatomic) unsigned char consumerSubTypeToConsider;
@property (readonly, nonatomic) NSSet *clientModelIds;
@property (readonly, nonatomic) NSDate *startDateForResults;
@property (readonly, nonatomic) NSURL *bookmarkURLPath;

- (id)uiFeedbackPublisherChain;
- (void).cxx_destruct;
- (id)uiFeedbackPublisher;
- (void)enumerateUIFeedbackResultsWithBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (id)initWithClientModelIds:(id)a0 consumerSubTypeToConsider:(unsigned char)a1 startDateForResults:(id)a2 bookmarkURLPath:(id)a3 uiPublisher:(id)a4 blendingModelPublisher:(id)a5 contextPublisher:(id)a6 hyperParameters:(id)a7;

@end
