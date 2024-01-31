@class NSString, NSNumber;

@interface PGMusicCuration : NSObject {
    void /* unknown type, empty encoding */ curatorVersion;
    void /* unknown type, empty encoding */ bestMusicSuggestions;
    void /* unknown type, empty encoding */ musicForYou;
    void /* unknown type, empty encoding */ musicForLocation;
    void /* unknown type, empty encoding */ musicForTime;
    void /* unknown type, empty encoding */ musicForPerformer;
    void /* unknown type, empty encoding */ musicCurationInfo;
}

@property (nonatomic, readonly) NSString *keySongAdamID;
@property (nonatomic, readonly) NSString *keySongTitle;
@property (nonatomic, readonly) NSString *keySongArtist;
@property (nonatomic, readonly) NSNumber *keySongArousal;
@property (nonatomic, readonly) NSNumber *keySongValence;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
