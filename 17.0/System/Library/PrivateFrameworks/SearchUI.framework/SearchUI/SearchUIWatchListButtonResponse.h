@class NSArray, SearchUIWatchListState, NSError;

@interface SearchUIWatchListButtonResponse : NSObject

@property (retain) NSArray *buttonModels;
@property (retain) SearchUIWatchListState *state;
@property (retain) NSError *error;

- (void).cxx_destruct;

@end
