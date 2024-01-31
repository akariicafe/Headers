@class NSString, NSDate, GKPlayerInternal;

@interface GKScoreInternal : GKInternalRepresentation

@property (readonly, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *groupCategory;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (retain, nonatomic) NSString *groupLeaderboardIdentifier;
@property (retain, nonatomic) NSString *formattedValue;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long value;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL valueSet;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serverRepresentation;

@end
