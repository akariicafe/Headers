@class NSString;

@interface GDGraphGamingActivityEventEntityIdentifier : GDEntityIdentifier <GDGraphEntityIdentifier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEntityIdentifier:(id)a0;
- (id)graphGamingActivityEventFromContext:(id)a0 error:(id *)a1;
- (id)initByCastingFrom:(id)a0;
- (id)initFromGDEntityIdentifier:(id)a0;

@end
