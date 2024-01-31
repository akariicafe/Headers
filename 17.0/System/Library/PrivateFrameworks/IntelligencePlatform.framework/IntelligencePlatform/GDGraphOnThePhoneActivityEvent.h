@class NSNumber, NSString, GDGraphDateRelationship, NSArray, GDGraphOnThePhoneActivityEventEntityIdentifier, GDGraphLocationEntityIdentifier, GDGraphActivityEventTypeEntityIdentifier;

@interface GDGraphOnThePhoneActivityEvent : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphOnThePhoneActivityEventEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) GDGraphDateRelationship *date;
@property (readonly, copy, nonatomic) NSArray *attendees;
@property (readonly, copy, nonatomic) NSArray *locations;
@property (readonly, copy, nonatomic) GDGraphLocationEntityIdentifier *startLocation;
@property (readonly, copy, nonatomic) GDGraphLocationEntityIdentifier *endLocation;
@property (readonly, copy, nonatomic) GDGraphActivityEventTypeEntityIdentifier *activityTypeObject;
@property (readonly, copy, nonatomic) NSNumber *activityType;
@property (readonly, copy, nonatomic) NSNumber *confidence;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) NSArray *allDate;
@property (readonly, copy, nonatomic) NSArray *allStartLocation;
@property (readonly, copy, nonatomic) NSArray *allEndLocation;
@property (readonly, copy, nonatomic) NSArray *allActivityTypeObject;
@property (readonly, copy, nonatomic) NSArray *allActivityType;
@property (readonly, copy, nonatomic) NSArray *allConfidence;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 nameField:(id)a1 dateField:(id)a2 attendeesField:(id)a3 locationsField:(id)a4 startLocationField:(id)a5 endLocationField:(id)a6 activityTypeObjectField:(id)a7 activityTypeField:(id)a8 confidenceField:(id)a9 allNameField:(id)a10 allDateField:(id)a11 allStartLocationField:(id)a12 allEndLocationField:(id)a13 allActivityTypeObjectField:(id)a14 allActivityTypeField:(id)a15 allConfidenceField:(id)a16;

@end
