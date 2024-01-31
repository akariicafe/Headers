@class NSString;

@interface GDGraphOnThePhoneActivityEventEntityIdentifier : GDEntityIdentifier <GDGraphEntityIdentifier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEntityIdentifier:(id)a0;
- (id)graphOnThePhoneActivityEventFromContext:(id)a0 error:(id *)a1;
- (id)initByCastingFrom:(id)a0;
- (id)initFromGDEntityIdentifier:(id)a0;

@end
