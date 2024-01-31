@class NSNumber, NSString, GDGraphDateRelationship, NSArray, GDGraphLocationEntityIdentifier, GDGraphBehaviorActivityEventEntityIdentifier, GDGraphActivityEventTypeEntityIdentifier;

@interface GDGraphBehaviorActivityEvent : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphBehaviorActivityEventEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) GDGraphDateRelationship *date;
@property (readonly, copy, nonatomic) NSArray *attendees;
@property (readonly, copy, nonatomic) NSArray *locations;
@property (readonly, copy, nonatomic) GDGraphLocationEntityIdentifier *startLocation;
@property (readonly, copy, nonatomic) GDGraphLocationEntityIdentifier *endLocation;
@property (readonly, copy, nonatomic) GDGraphActivityEventTypeEntityIdentifier *activityTypeObject;
@property (readonly, copy, nonatomic) NSNumber *activityType;
@property (readonly, copy, nonatomic) NSNumber *confidence;
@property (readonly, copy, nonatomic) NSString *behaviorType;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) NSArray *allDate;
@property (readonly, copy, nonatomic) NSArray *allStartLocation;
@property (readonly, copy, nonatomic) NSArray *allEndLocation;
@property (readonly, copy, nonatomic) NSArray *allActivityTypeObject;
@property (readonly, copy, nonatomic) NSArray *allActivityType;
@property (readonly, copy, nonatomic) NSArray *allConfidence;
@property (readonly, copy, nonatomic) NSArray *allBehaviorType;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 nameField:(id)a1 dateField:(id)a2 attendeesField:(id)a3 locationsField:(id)a4 startLocationField:(id)a5 endLocationField:(id)a6 activityTypeObjectField:(id)a7 activityTypeField:(id)a8 confidenceField:(id)a9 behaviorTypeField:(id)a10 allNameField:(id)a11 allDateField:(id)a12 allStartLocationField:(id)a13 allEndLocationField:(id)a14 allActivityTypeObjectField:(id)a15 allActivityTypeField:(id)a16 allConfidenceField:(id)a17 allBehaviorTypeField:(id)a18;

@end
