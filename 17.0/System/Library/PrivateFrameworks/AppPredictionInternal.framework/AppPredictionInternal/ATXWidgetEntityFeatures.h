@class NSNumber;

@interface ATXWidgetEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSNumber *parentAppScore;
@property (retain, nonatomic) NSNumber *parentAppGlobalPrior;
@property (retain, nonatomic) NSNumber *widgetGlobalPrior;

- (id)init;
- (id)initFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
