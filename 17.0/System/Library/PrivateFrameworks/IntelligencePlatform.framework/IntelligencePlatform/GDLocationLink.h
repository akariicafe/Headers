@class NSString, GDRelationshipIdentifier, GDEntityIdentifier;

@interface GDLocationLink : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer>

@property (readonly, nonatomic) GDRelationshipIdentifier *relationshipIdentifier;
@property (readonly, nonatomic) GDEntityIdentifier *locationEntityIdentifier;
@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
