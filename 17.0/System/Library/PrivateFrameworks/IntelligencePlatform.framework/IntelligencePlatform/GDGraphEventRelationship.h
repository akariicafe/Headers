@class NSArray, GDEntityIdentifier, NSString;
@protocol GDGraphEntityIdentifier;

@interface GDGraphEventRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) GDEntityIdentifier<GDGraphEntityIdentifier> *eventId;
@property (readonly, copy, nonatomic) NSArray *allEventId;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEventIdField:(id)a0 allEventIdField:(id)a1;

@end
