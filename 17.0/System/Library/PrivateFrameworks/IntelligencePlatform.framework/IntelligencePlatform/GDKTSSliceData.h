@class NSString, GDKTSDataAggregateRepresentation, GDKTSQueryParams;
@protocol GDKTSContextRepresentationProtocol;

@interface GDKTSSliceData : NSObject <GDKTSDataProtocol>

@property (readonly, nonatomic) GDKTSDataAggregateRepresentation *data;
@property (readonly, nonatomic) id<GDKTSContextRepresentationProtocol> context;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) GDKTSQueryParams *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
