@class NSString, NSURL, SearchUIWatchListState, SFImage;

@interface SearchUIWatchListButtonModel : NSObject

@property (retain) NSString *title;
@property (retain) NSString *subtitle;
@property (retain) NSURL *punchoutURL;
@property (retain) NSString *storeIdentifier;
@property (retain) SearchUIWatchListState *watchListState;
@property unsigned long long buttonType;
@property (retain) SFImage *thumbnailImage;

- (void).cxx_destruct;

@end
