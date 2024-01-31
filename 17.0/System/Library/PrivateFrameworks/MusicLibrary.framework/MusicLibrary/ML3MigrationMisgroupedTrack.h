@interface ML3MigrationMisgroupedTrack : NSObject

@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) long long albumArtistPID;

- (id)initWithPersistentID:(long long)a0 albumArtistPID:(long long)a1;

@end
