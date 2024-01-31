@class NSString, PPNamedEntityDissector;

@interface PPNamedEntityExtractionPlugin : NSObject <HVUserActivityConsumer> {
    PPNamedEntityDissector *_dissector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)consumerName;
- (id)_extractionsFromEntityContainers:(id)a0;
- (id)_entityContainersForUserAction:(id)a0 searchableItem:(id)a1;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)init;
- (void)_writeAndFlushContainers:(id)a0;
- (id)consumeUserActivityMetadataWithContext:(id)a0;
- (void)_processCSSearchableItemLocationWithName:(id)a0 thoroughfare:(id)a1 city:(id)a2 state:(id)a3 country:(id)a4 postalCode:(id)a5 latitude:(id)a6 longitude:(id)a7 extractionContainer:(id)a8;
- (id)_entityContainersForContent:(id)a0 contentDataSource:(id)a1 isOutgoing:(BOOL)a2 contactHandles:(id)a3 uniqueIdentifier:(id)a4 domainIdentifier:(id)a5 bundleIdentifier:(id)a6;
- (id)entityContainersForUserActivity:(id)a0;
- (id)_extractionCountForContainers:(id)a0;
- (void).cxx_destruct;
- (id)initWithNamedEntityDissector:(id)a0;
- (id)consumeSearchableUserActivityWithContext:(id)a0;
- (BOOL)_processUserActivity:(id)a0 extractionContainer:(id)a1 rawTextOut:(id *)a2 language:(id)a3;

@end
