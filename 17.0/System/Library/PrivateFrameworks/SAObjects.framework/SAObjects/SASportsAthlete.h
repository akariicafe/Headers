@class NSArray, NSString, SASportsTeam, NSNumber;

@interface SASportsAthlete : SASportsEntity

@property (retain, nonatomic) SASportsTeam *activeTeam;
@property (copy, nonatomic) NSArray *athleteMetadata;
@property (copy, nonatomic) NSArray *careerStatistics;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSArray *formattedMetadata;
@property (copy, nonatomic) NSArray *formattedMetadataTypes;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *height;
@property (copy, nonatomic) NSNumber *injured;
@property (copy, nonatomic) NSString *jerseyNumber;
@property (copy, nonatomic) NSArray *lastGameStatistics;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSArray *previousTeams;
@property (copy, nonatomic) NSArray *statistics;
@property (copy, nonatomic) NSString *weight;

+ (id)athlete;
+ (id)athleteWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
