@class GDGraphQuantityRelationship, NSString, NSArray, GDGraphSongEntityIdentifier;

@interface GDGraphSong : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphSongEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSString *albumName;
@property (readonly, copy, nonatomic) NSString *genre;
@property (readonly, copy, nonatomic) GDGraphQuantityRelationship *duration;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSString *songAdamId;
@property (readonly, copy, nonatomic) NSString *albumAdamId;
@property (readonly, copy, nonatomic) NSString *artistAdamId;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) NSArray *allArtistName;
@property (readonly, copy, nonatomic) NSArray *allAlbumName;
@property (readonly, copy, nonatomic) NSArray *allGenre;
@property (readonly, copy, nonatomic) NSArray *allDuration;
@property (readonly, copy, nonatomic) NSArray *allSongAdamId;
@property (readonly, copy, nonatomic) NSArray *allAlbumAdamId;
@property (readonly, copy, nonatomic) NSArray *allArtistAdamId;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 nameField:(id)a1 artistNameField:(id)a2 albumNameField:(id)a3 genreField:(id)a4 durationField:(id)a5 identifiersField:(id)a6 songAdamIdField:(id)a7 albumAdamIdField:(id)a8 artistAdamIdField:(id)a9 allNameField:(id)a10 allArtistNameField:(id)a11 allAlbumNameField:(id)a12 allGenreField:(id)a13 allDurationField:(id)a14 allSongAdamIdField:(id)a15 allAlbumAdamIdField:(id)a16 allArtistAdamIdField:(id)a17;

@end
