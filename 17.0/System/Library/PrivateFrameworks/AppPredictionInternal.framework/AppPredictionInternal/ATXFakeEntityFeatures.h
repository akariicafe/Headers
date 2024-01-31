@class NSMutableArray;

@interface ATXFakeEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *identifiersAndDates;

- (id)init;
- (id)initFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
