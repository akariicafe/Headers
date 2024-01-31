@class NSString, NSMutableArray;

@interface GCHapticCapabilityGraphNode : NSObject <GCJSONRepresentable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) NSMutableArray *actuators;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic, getter=isExposed) BOOL exposed;

- (id)jsonDictionaryRepresentation;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)addActuator:(id)a0;
- (id)initWithJSONDictionaryRepresentation:(id)a0;

@end
