@class NSString, GDRelationshipIdentifier;

@interface GDPersonIdentifier : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer>

@property (readonly, nonatomic) GDRelationshipIdentifier *relationshipIdentifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *hasProfileImage;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
