@class NSString, GDGraphSongEventEntityIdentifier, GDGraphDateRelationship, GDGraphSongRelationship, NSArray;

@interface GDGraphSongEvent : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphSongEventEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) GDGraphDateRelationship *date;
@property (readonly, copy, nonatomic) NSString *playbackState;
@property (readonly, copy, nonatomic) GDGraphSongRelationship *song;
@property (readonly, copy, nonatomic) NSArray *allDate;
@property (readonly, copy, nonatomic) NSArray *allPlaybackState;
@property (readonly, copy, nonatomic) NSArray *allSong;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 dateField:(id)a1 playbackStateField:(id)a2 songField:(id)a3 allDateField:(id)a4 allPlaybackStateField:(id)a5 allSongField:(id)a6;

@end
