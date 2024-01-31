@interface PTCinematographyTrackAllocator : NSObject

@property (nonatomic) long long trackIdentifier;

- (id)_asCinematographyDictionary;
- (id)_initWithCinematographyDictionary:(id)a0;
- (id)initWithTrackIdentifier:(long long)a0;
- (long long)nextTrackIdentifier;

@end
