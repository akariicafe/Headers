@class NSString, NSArray;

@interface SREMusicCandidate : NSObject

@property (nonatomic) long long trackId;
@property (retain, nonatomic) NSString *trackName;
@property (retain, nonatomic) NSString *artistName;
@property (nonatomic) long long collectionId;
@property (retain, nonatomic) NSString *collectionName;
@property (retain, nonatomic) NSArray *genreIDs;
@property (retain, nonatomic) NSString *artworkURL;
@property (nonatomic) long long trackTimeMillis;
@property (nonatomic) unsigned char trackExplicitness;

- (id)init;
- (void).cxx_destruct;
- (id)debugString;
- (id)genresDebugString;

@end
