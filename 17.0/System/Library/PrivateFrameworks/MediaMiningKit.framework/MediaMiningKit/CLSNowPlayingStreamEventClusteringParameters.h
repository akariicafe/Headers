@interface CLSNowPlayingStreamEventClusteringParameters : NSObject

@property (nonatomic) double minimumClusterTimeInSeconds;
@property (nonatomic) unsigned long long algorithm;

- (id)init;

@end
