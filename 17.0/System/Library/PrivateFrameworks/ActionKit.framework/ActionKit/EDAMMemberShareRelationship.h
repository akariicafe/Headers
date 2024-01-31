@class NSString, NSNumber, EDAMShareRelationshipRestrictions;

@interface EDAMMemberShareRelationship : FATObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSNumber *recipientUserId;
@property (retain, nonatomic) NSNumber *bestPrivilege;
@property (retain, nonatomic) NSNumber *individualPrivilege;
@property (retain, nonatomic) EDAMShareRelationshipRestrictions *restrictions;
@property (retain, nonatomic) NSNumber *sharerUserId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
