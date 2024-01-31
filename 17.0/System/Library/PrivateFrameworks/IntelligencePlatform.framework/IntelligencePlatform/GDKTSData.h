@class NSString, GDKTSDataAggregateRepresentation, GDEntityIdentifier;
@protocol GDKTSContextRepresentationProtocol;

@interface GDKTSData : NSObject <GDKTSDataProtocol>

@property (readonly, nonatomic) GDKTSDataAggregateRepresentation *data;
@property (readonly, nonatomic) id<GDKTSContextRepresentationProtocol> context;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) GDEntityIdentifier *tripEntityId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 context:(id)a1 data:(id)a2 metadata:(id)a3;

@end
