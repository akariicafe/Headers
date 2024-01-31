@interface PHFetchResultMediaTypeCounts : NSObject

@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (readonly, nonatomic) unsigned long long audiosCount;

+ (id)mediaTypeCountsWithPhotosCount:(unsigned long long)a0 videosCount:(unsigned long long)a1 audiosCount:(unsigned long long)a2;

- (id)initWithPhotosCount:(unsigned long long)a0 videosCount:(unsigned long long)a1 audiosCount:(unsigned long long)a2;

@end
