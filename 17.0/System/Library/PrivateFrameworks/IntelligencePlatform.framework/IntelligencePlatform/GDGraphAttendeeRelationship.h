@class NSString, GDEntityIdentifier, NSArray;
@protocol GDGraphEntityIdentifier;

@interface GDGraphAttendeeRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSString *eventParticipationType;
@property (readonly, copy, nonatomic) GDEntityIdentifier<GDGraphEntityIdentifier> *attendeeId;
@property (readonly, copy, nonatomic) NSArray *allEventParticipationType;
@property (readonly, copy, nonatomic) NSArray *allAttendeeId;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEventParticipationTypeField:(id)a0 attendeeIdField:(id)a1 allEventParticipationTypeField:(id)a2 allAttendeeIdField:(id)a3;

@end
