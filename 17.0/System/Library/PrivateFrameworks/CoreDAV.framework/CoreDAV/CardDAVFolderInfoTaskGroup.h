@class NSSet;

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {
    NSSet *_directoryGatewayURLs;
}

- (int)containerInfoDepthForURL:(id)a0;
- (id)_copyContainerWithURL:(id)a0 andProperties:(id)a1;
- (void).cxx_destruct;
- (id)_copyContainerParserMappings;
- (id)initWithAccountInfoProvider:(id)a0 containerURLs:(id)a1 directoryGatewayURLs:(id)a2 taskManager:(id)a3;

@end
