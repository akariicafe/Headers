@class NSString, GDRelationshipIdentifier;

@interface GDLocationAddress : NSObject <GDTripleIteratorSubentityRenderer, GDSubentity>

@property (readonly, nonatomic) GDRelationshipIdentifier *relationshipIdentifier;
@property (readonly, nonatomic) NSString *subPremises;
@property (readonly, nonatomic) NSString *subThoroughfare;
@property (readonly, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *locality;
@property (readonly, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) NSString *administrativeArea;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *ISOCountryCode;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)a0;

@end
