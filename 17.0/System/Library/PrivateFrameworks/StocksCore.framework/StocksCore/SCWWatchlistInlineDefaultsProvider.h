@class SCWWatchlistDefaults;

@interface SCWWatchlistInlineDefaultsProvider : NSObject <SCWWatchlistDefaultsProviding> {
    SCWWatchlistDefaults *_defaults;
}

- (void).cxx_destruct;
- (id)initWithDefaults:(id)a0;
- (void)fetchWatchlistDefaultsWithCompletion:(id /* block */)a0;

@end
