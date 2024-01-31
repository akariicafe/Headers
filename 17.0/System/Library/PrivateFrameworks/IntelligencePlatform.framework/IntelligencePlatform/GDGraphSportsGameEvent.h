@class NSArray, GDGraphSportsGameEventEntityIdentifier, NSString, GDGraphDateRelationship, GDGraphLocationEntityIdentifier;

@interface GDGraphSportsGameEvent : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphSportsGameEventEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSArray *eventTypes;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) GDGraphDateRelationship *date;
@property (readonly, copy, nonatomic) NSArray *cooccurringEvents;
@property (readonly, copy, nonatomic) NSArray *locations;
@property (readonly, copy, nonatomic) GDGraphLocationEntityIdentifier *startLocation;
@property (readonly, copy, nonatomic) GDGraphLocationEntityIdentifier *endLocation;
@property (readonly, copy, nonatomic) NSArray *teams;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) NSArray *allDate;
@property (readonly, copy, nonatomic) NSArray *allStartLocation;
@property (readonly, copy, nonatomic) NSArray *allEndLocation;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 eventTypesField:(id)a1 nameField:(id)a2 dateField:(id)a3 cooccurringEventsField:(id)a4 locationsField:(id)a5 startLocationField:(id)a6 endLocationField:(id)a7 teamsField:(id)a8 allNameField:(id)a9 allDateField:(id)a10 allStartLocationField:(id)a11 allEndLocationField:(id)a12;

@end
