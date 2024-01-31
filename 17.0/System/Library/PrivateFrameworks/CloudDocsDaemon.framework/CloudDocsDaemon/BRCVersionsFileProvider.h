@class NSString, NSMutableDictionary;

@interface BRCVersionsFileProvider : BRCFileProvider {
    NSMutableDictionary *_operationsByName;
    NSString *_personaIdentifier;
}

- (void)_cancelProvidingItemAtURL:(id)a0 toReaderWithID:(id)a1;
- (id)_physicalURLForURL:(id)a0;
- (void)dumpToContext:(id)a0;
- (id)_fileReactorID;
- (void)_provideItemAtURL:(id)a0 toReaderWithID:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithVolume:(id)a0 personaIdentifier:(id)a1;
- (void)resume;
- (void).cxx_destruct;

@end
