@class NSString, NSArray, NSDate;

@interface FCSportsData : NSObject

@property (copy, nonatomic) NSString *UMCCanonicalID;
@property (copy, nonatomic) NSString *sportsPrimaryName;
@property (copy, nonatomic) NSString *sportsNameAbbreviation;
@property (copy, nonatomic) NSString *sportsSecondaryName;
@property (copy, nonatomic) NSString *sportsFullName;
@property (copy, nonatomic) NSString *topLevelSportTagIdentifier;
@property (retain, nonatomic) NSArray *topLevelGroupsTagIdentifiers;
@property (copy, nonatomic) NSString *sportsNickname;
@property (copy, nonatomic) NSString *sportsLocation;
@property (nonatomic) BOOL hideLocationInMasthead;
@property (nonatomic) unsigned long long sportsType;
@property (copy, nonatomic) NSString *sportsTypeDisplayName;
@property (copy, nonatomic) NSString *sportsTypePluralizedDisplayName;
@property (nonatomic) unsigned long long sportsLeagueType;
@property (copy, nonatomic) NSDate *sportsEventStartTime;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_inflateSportsDataFromJSONDictionary:(id)a0;

@end
