@class NSString, NSDictionary, NSArray, NSDate;

@interface VUISportsScoreboardViewModel : NSObject {
    NSDictionary *_dictionaryRepresentation;
}

@property (readonly, nonatomic) NSString *canonicalId;
@property (readonly, nonatomic) NSString *leagueId;
@property (readonly, nonatomic) NSDictionary *leagueContext;
@property (readonly, nonatomic) NSArray *scores;
@property (readonly, nonatomic) BOOL showScoreboard;
@property (nonatomic) BOOL configureScoreUpdates;
@property (readonly, nonatomic) BOOL isVersus;
@property (readonly, nonatomic) NSDate *lastUpdatedTime;
@property (readonly, nonatomic) NSDictionary *contentMetadata;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)jsContextDictionary;
- (void)removeUnicodeFromScoreValuesIfNeeded;

@end
