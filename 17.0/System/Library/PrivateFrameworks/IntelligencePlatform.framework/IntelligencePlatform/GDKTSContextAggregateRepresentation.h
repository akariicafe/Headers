@class NSArray;

@interface GDKTSContextAggregateRepresentation : NSObject <GDKTSContextRepresentationProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *originContexts;
@property (readonly, nonatomic) NSArray *ktsContexts;
@property (readonly, nonatomic) NSArray *destinationContexts;
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
- (id)initWithOriginContexts:(id)a0 ktsContexts:(id)a1 destinationContexts:(id)a2;

@end
