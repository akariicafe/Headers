@class GKGameInternal, NSString, NSOrderedSet, GKPlayerInternal, NSDate;

@interface GKChallengeInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSDate *issueDate;
@property (retain, nonatomic) NSDate *completionDate;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSOrderedSet *compatibleBundleIDs;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) GKGameInternal *game;
@property (retain, nonatomic) GKPlayerInternal *issuingPlayer;
@property (retain, nonatomic) GKPlayerInternal *receivingPlayer;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *subtitleText;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionSubstitutionMap;
- (id)findLocalGameBundleID;
- (id)serverRepresentation;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
