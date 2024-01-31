@class NSArray;

@interface GDKTSContextRepresentation : NSObject <GDKTSContextRepresentationProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *originContext;
@property (readonly, nonatomic) NSArray *ktsContext;
@property (readonly, nonatomic) NSArray *destinationContext;
@property (readonly, nonatomic) NSArray *originPeople;
@property (readonly, nonatomic) NSArray *originPlaces;
@property (readonly, nonatomic) NSArray *originActivities;
@property (readonly, nonatomic) NSArray *people;
@property (readonly, nonatomic) NSArray *places;
@property (readonly, nonatomic) NSArray *activities;
@property (readonly, nonatomic) NSArray *destinationPeople;
@property (readonly, nonatomic) NSArray *destinationPlaces;
@property (readonly, nonatomic) NSArray *destinationActivities;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOriginContext:(id)a0 ktsContext:(id)a1 destinationContext:(id)a2;

@end
