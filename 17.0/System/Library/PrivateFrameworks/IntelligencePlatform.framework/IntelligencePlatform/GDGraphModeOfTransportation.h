@class NSArray, NSString, GDGraphModeOfTransportationEntityIdentifier, NSNumber;

@interface GDGraphModeOfTransportation : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphModeOfTransportationEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSNumber *transportationType;
@property (readonly, copy, nonatomic) NSArray *allTransportationType;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 transportationTypeField:(id)a1 allTransportationTypeField:(id)a2;

@end
