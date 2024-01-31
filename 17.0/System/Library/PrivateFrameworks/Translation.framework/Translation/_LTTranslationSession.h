@class NSUUID, NSString, NSURL, _LTSafariLatencyLoggingRequest, NSMutableDictionary, _LTRateLimiter, _LTTranslator, NSObject;
@protocol _LTTextTranslationService, OS_dispatch_queue;

@interface _LTTranslationSession : NSObject <_LTSpeechTranslationDelegate> {
    NSMutableDictionary *_outstandingRequests;
    _LTSafariLatencyLoggingRequest *_logging;
    NSString *_sessionID;
    BOOL _waitingForService;
}

@property (retain, nonatomic) _LTTranslator *translator;
@property (retain, nonatomic) id<_LTTextTranslationService> service;
@property (retain, nonatomic) _LTRateLimiter *rateLimiter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *translationQueue;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSUUID *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paragraphTranslation:(id)a0 result:(id)a1 error:(id)a2;
- (void)prepareWithService:(id)a0;
- (void)markPageLoaded;
- (void)markFirstParagraphComplete;
- (void)_ensureServiceConnection:(id /* block */)a0 useDedicatedTextMachPort:(BOOL)a1;
- (void)_commonInitWithSuggestedSessionID:(id)a0;
- (id)initWithTranslator:(id)a0 selfLoggingInvocationId:(id)a1;
- (void)markPageComplete;
- (void).cxx_destruct;
- (void)provideFeedback:(id)a0;
- (void)translate:(id)a0 useDedicatedTextMachPort:(BOOL)a1;
- (void)markProgressDone;
- (void)translate:(id)a0;
- (id)initForFutureServiceWithSessionID:(id)a0 selfLoggingInvocationId:(id)a1;

@end
