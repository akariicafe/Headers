@class NSString, GDRelationshipIdentifier, GDEntityIdentifier;

@interface GDPersonLink : NSObject <GDTripleIteratorSubentityRenderer, GDSubentity>

@property (readonly, nonatomic) GDRelationshipIdentifier *relationshipIdentifier;
@property (readonly, nonatomic) NSString *relationshipLabel;
@property (readonly, nonatomic) GDEntityIdentifier *linkedPersonEntityIdentifier;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
