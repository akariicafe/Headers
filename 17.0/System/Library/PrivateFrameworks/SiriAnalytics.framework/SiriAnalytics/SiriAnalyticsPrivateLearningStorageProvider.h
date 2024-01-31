@class NSString, BMSiriPrivateLearningSELFEventStream, BMSource;

@interface SiriAnalyticsPrivateLearningStorageProvider : NSObject <SiriAnalyticsMessageStorage> {
    BMSiriPrivateLearningSELFEventStream *_stream;
    BMSource *_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isAnyEventTypeAllowed:(int)a0;
- (void)storeOrderedAnyEvent:(id)a0;
- (void)storeMessages:(id)a0;
- (void).cxx_destruct;

@end
