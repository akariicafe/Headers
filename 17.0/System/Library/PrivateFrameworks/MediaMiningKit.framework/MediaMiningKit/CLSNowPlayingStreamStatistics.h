@class NSArray;

@interface CLSNowPlayingStreamStatistics : NSObject

@property (readonly, nonatomic) NSArray *sortedAlbums;
@property (readonly, nonatomic) NSArray *sortedArtists;
@property (readonly, nonatomic) NSArray *sortedTitles;
@property (readonly, nonatomic) NSArray *sortedGenres;
@property (readonly, nonatomic) NSArray *sortedSources;
@property (readonly, nonatomic) NSArray *sortedSessions;
@property (readonly, nonatomic) double maxDurationInSeconds;
@property (readonly, nonatomic) double minDurationInSeconds;

- (void).cxx_destruct;
- (void)computeStatistics;
- (id)initWithNowPlayingStreamSessions:(id)a0;
- (void)logStatistics;

@end
