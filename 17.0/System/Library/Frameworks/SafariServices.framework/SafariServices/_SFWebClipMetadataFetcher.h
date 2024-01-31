@class NSArray, NSDictionary, NSMutableArray, _SFInjectedJavaScriptController;

@interface _SFWebClipMetadataFetcher : NSObject {
    NSDictionary *_metaTags;
    NSArray *_linkTags;
    NSMutableArray *_metadataConsumers;
    BOOL _fetchingCompleted;
    _SFInjectedJavaScriptController *_jsController;
}

+ (id)_webClipLinkTagWithDictionary:(id)a0;
+ (id)metadataFetcherScriptSource;
+ (void)parseRawMetadataDictionary:(id)a0 consumer:(id /* block */)a1;

- (void).cxx_destruct;
- (void)_startFetchingMetadata;
- (void)fetchMetadataWithConsumer:(id /* block */)a0;
- (id)initWithInjectedJavascriptController:(id)a0;

@end
