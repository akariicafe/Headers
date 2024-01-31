@class NSArray, NSString;

@interface PGFlexMusicCuration : NSObject {
    void /* unknown type, empty encoding */ curatorVersion;
    void /* unknown type, empty encoding */ bestSongSuggestions;
    void /* unknown type, empty encoding */ secondarySongSuggestions;
}

@property (nonatomic, readonly) NSArray *bestSongSuggestions;
@property (nonatomic, readonly) NSArray *secondarySongSuggestions;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
