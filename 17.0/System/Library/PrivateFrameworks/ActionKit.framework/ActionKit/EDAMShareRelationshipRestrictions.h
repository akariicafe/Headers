@class NSNumber;

@interface EDAMShareRelationshipRestrictions : FATObject

@property (retain, nonatomic) NSNumber *noSetReadOnly;
@property (retain, nonatomic) NSNumber *noSetReadPlusActivity;
@property (retain, nonatomic) NSNumber *noSetModify;
@property (retain, nonatomic) NSNumber *noSetFullAccess;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
