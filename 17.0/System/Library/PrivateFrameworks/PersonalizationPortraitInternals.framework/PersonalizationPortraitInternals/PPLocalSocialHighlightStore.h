@class NSString, PPSocialHighlightStorage;

@interface PPLocalSocialHighlightStore : NSObject <HVSafariConsumer, HVMessagesConsumer> {
    PPSocialHighlightStorage *_storage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultStore;

- (id)consumerName;
- (id)consumeMessagesContentWithContext:(id)a0;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)init;
- (id)initWithStorage:(id)a0;
- (id)attributionForIdentifier:(id)a0 error:(id *)a1;
- (id)consumeSafariContentWithContext:(id)a0;
- (BOOL)feedbackForHighlight:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 error:(id *)a4;
- (id)rankedHighlightsForSyncedItems:(id)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (void).cxx_destruct;
- (BOOL)feedbackForAttribution:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 error:(id *)a4;
- (id)rankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;

@end
