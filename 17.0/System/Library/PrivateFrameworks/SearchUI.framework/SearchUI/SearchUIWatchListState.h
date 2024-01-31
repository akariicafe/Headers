@class NSString;

@interface SearchUIWatchListState : NSObject

@property (nonatomic) BOOL isWatchListed;
@property (retain, nonatomic) NSString *watchListIdentifier;

- (id)initWithResponse:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 watchListed:(BOOL)a1;
- (id)initWithContainerResponse:(id)a0;
- (void)toggleStateWithCompletion:(id /* block */)a0;

@end
