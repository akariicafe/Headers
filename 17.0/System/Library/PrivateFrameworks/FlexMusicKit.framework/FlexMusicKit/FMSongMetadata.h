@class NSString, NSSet, NSDictionary;

@interface FMSongMetadata : NSObject

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *songName;
@property (copy, nonatomic) NSString *mood;
@property (copy, nonatomic) NSString *moodAlt;
@property (copy, nonatomic) NSString *pace;
@property (copy, nonatomic) NSSet *genres;
@property (copy, nonatomic) NSSet *regions;
@property (copy, nonatomic) NSSet *keywords;
@property (copy, nonatomic) NSDictionary *weightedKeywords;
@property (nonatomic) double visualTempo;
@property (nonatomic) double arousal;
@property (nonatomic) double valence;
@property (nonatomic) long long style;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL recalled;

- (id)init;
- (void).cxx_destruct;

@end
