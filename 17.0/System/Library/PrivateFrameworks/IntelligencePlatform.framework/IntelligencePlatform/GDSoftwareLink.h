@class NSString, GDRelationshipIdentifier, GDEntityIdentifier;

@interface GDSoftwareLink : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer>

@property (readonly, nonatomic) GDRelationshipIdentifier *relationshipIdentifier;
@property (readonly, nonatomic) GDEntityIdentifier *softwareEntityIdentifier;
@property (readonly, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) NSString *identifierType;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
