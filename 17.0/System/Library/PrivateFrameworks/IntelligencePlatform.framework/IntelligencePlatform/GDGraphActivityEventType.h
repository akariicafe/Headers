@class NSString, GDGraphActivityEventTypeEntityIdentifier, NSArray;

@interface GDGraphActivityEventType : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphActivityEventTypeEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 nameField:(id)a1 allNameField:(id)a2;

@end
