@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reason2;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (int)defaultFamiliarity;

@end
