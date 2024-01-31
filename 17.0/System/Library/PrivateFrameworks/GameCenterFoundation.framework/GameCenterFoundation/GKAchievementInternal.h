@class NSString, NSDictionary, GKPlayerInternal, NSDate, NSNumber;

@interface GKAchievementInternal : GKInternalRepresentation {
    NSNumber *rarityPercent;
    union { struct { unsigned short _maximumPoints : 16; unsigned char _hidden : 1; unsigned char _replayable : 1; unsigned short _reserved : 14; } ; unsigned int _value; } _attributes;
}

@property (nonatomic) unsigned int attributes;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *achievedDescription;
@property (retain, nonatomic) NSString *unachievedDescription;
@property (retain, nonatomic) NSDictionary *icons;
@property (nonatomic) unsigned short maximumPoints;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isReplayable) BOOL replayable;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (retain, nonatomic) NSDate *lastReportedDate;
@property (nonatomic) double percentComplete;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) NSNumber *rarityPercent;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (unsigned int)attributes;
- (void)encodeWithCoder:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setAttributes:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned short)maximumPoints;
- (id)descriptionSubstitutionMap;
- (id)serverRepresentation;
- (void)setMaximumPoints:(unsigned short)a0;
- (void)setReplayable:(BOOL)a0;

@end
