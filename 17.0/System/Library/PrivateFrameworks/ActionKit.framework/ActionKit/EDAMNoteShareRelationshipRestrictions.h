@class NSNumber;

@interface EDAMNoteShareRelationshipRestrictions : FATObject

@property (retain, nonatomic) NSNumber *noSetReadNote;
@property (retain, nonatomic) NSNumber *noSetModifyNote;
@property (retain, nonatomic) NSNumber *noSetFullAccess;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
