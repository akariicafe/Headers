@class SearchUICommandHandler;

@interface SearchUICopyItemHandler : SearchUICommandHandler

@property (retain) SearchUICommandHandler *handlerForCopying;

- (unsigned long long)destination;
- (void).cxx_destruct;
- (id)defaultTitle;
- (id)defaultSymbolName;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;

@end
