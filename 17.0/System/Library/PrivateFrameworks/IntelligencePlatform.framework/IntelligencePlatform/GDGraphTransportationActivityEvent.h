@class NSString, NSArray, GDGraphActivityEventTypeEntityIdentifier, GDGraphTransportationActivityEventEntityIdentifier, GDGraphLocationEntityIdentifier, GDGraphModeOfTransportationEntityIdentifier, GDGraphDateRelationship, NSNumber;

@interface GDGraphTransportationActivityEvent : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphTransportationActivityEventEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) GDGraphDateRelationship *date;
@property (readonly, copy, nonatomic) NSArray *attendees;
@property (readonly, copy, nonatomic) NSArray *locations;
@property (readonly, copy, nonatomic) GDGraphLocationEntityIdentifier *startLocation;
@property (readonly, copy, nonatomic) GDGraphLocationEntityIdentifier *endLocation;
@property (readonly, copy, nonatomic) GDGraphActivityEventTypeEntityIdentifier *activityTypeObject;
@property (readonly, copy, nonatomic) NSNumber *activityType;
@property (readonly, copy, nonatomic) NSNumber *confidence;
@property (readonly, copy, nonatomic) NSNumber *uncertainty;
@property (readonly, copy, nonatomic) GDGraphModeOfTransportationEntityIdentifier *modeOfTransportation;
@property (readonly, copy, nonatomic) NSNumber *transportationType;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) NSArray *allDate;
@property (readonly, copy, nonatomic) NSArray *allStartLocation;
@property (readonly, copy, nonatomic) NSArray *allEndLocation;
@property (readonly, copy, nonatomic) NSArray *allActivityTypeObject;
@property (readonly, copy, nonatomic) NSArray *allActivityType;
@property (readonly, copy, nonatomic) NSArray *allConfidence;
@property (readonly, copy, nonatomic) NSArray *allUncertainty;
@property (readonly, copy, nonatomic) NSArray *allModeOfTransportation;
@property (readonly, copy, nonatomic) NSArray *allTransportationType;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 nameField:(id)a1 dateField:(id)a2 attendeesField:(id)a3 locationsField:(id)a4 startLocationField:(id)a5 endLocationField:(id)a6 activityTypeObjectField:(id)a7 activityTypeField:(id)a8 confidenceField:(id)a9 uncertaintyField:(id)a10 modeOfTransportationField:(id)a11 transportationTypeField:(id)a12 allNameField:(id)a13 allDateField:(id)a14 allStartLocationField:(id)a15 allEndLocationField:(id)a16 allActivityTypeObjectField:(id)a17 allActivityTypeField:(id)a18 allConfidenceField:(id)a19 allUncertaintyField:(id)a20 allModeOfTransportationField:(id)a21 allTransportationTypeField:(id)a22;

@end
