@class GDGraphActivityEventTypeEntityIdentifier, NSArray, NSString, GDGraphDateRelationship, GDGraphLocationEntityIdentifier, NSNumber, GDGraphActivityEventEntityIdentifier;

@interface GDGraphActivityEvent : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphActivityEventEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSArray *eventTypes;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) GDGraphDateRelationship *date;
@property (readonly, copy, nonatomic) NSArray *attendees;
@property (readonly, copy, nonatomic) NSArray *cooccurringEvents;
@property (readonly, copy, nonatomic) NSArray *subEvents;
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
- (id)initWithEntityIdentifierField:(id)a0 eventTypesField:(id)a1 nameField:(id)a2 dateField:(id)a3 attendeesField:(id)a4 cooccurringEventsField:(id)a5 subEventsField:(id)a6 locationsField:(id)a7 startLocationField:(id)a8 endLocationField:(id)a9 activityTypeObjectField:(id)a10 activityTypeField:(id)a11 confidenceField:(id)a12 allNameField:(id)a13 allDateField:(id)a14 allStartLocationField:(id)a15 allEndLocationField:(id)a16 allActivityTypeObjectField:(id)a17 allActivityTypeField:(id)a18 allConfidenceField:(id)a19;

@end
