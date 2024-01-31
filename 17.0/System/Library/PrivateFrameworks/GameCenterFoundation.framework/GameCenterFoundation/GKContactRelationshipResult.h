@class NSString, GKPlayerInternal;

@interface GKContactRelationshipResult : GKInternalRepresentation

@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) GKPlayerInternal *relatedPlayer;
@property (nonatomic) int relationship;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
