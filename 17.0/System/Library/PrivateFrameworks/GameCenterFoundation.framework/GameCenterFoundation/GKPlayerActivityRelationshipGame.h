@class NSNumber, GKPlayerActivityRelationshipIcon;

@interface GKPlayerActivityRelationshipGame : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSNumber *adamId;
@property (retain, nonatomic) GKPlayerActivityRelationshipIcon *icon;

+ (id)secureCodedPropertyKeys;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
