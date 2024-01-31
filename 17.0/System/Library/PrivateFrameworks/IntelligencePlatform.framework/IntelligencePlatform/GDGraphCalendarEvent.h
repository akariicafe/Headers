@class GDGraphCalendarEventEntityIdentifier, NSString, NSArray, NSNumber;

@interface GDGraphCalendarEvent : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphCalendarEventEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *dates;
@property (readonly, copy, nonatomic) NSNumber *isAllDay;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSArray *attendees;
@property (readonly, copy, nonatomic) NSArray *organizers;
@property (readonly, copy, nonatomic) NSArray *locations;
@property (readonly, copy, nonatomic) NSArray *sgeventType;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) NSArray *allIsAllDay;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 nameField:(id)a1 datesField:(id)a2 isAllDayField:(id)a3 identifiersField:(id)a4 attendeesField:(id)a5 organizersField:(id)a6 locationsField:(id)a7 sgeventTypeField:(id)a8 allNameField:(id)a9 allIsAllDayField:(id)a10;

@end
