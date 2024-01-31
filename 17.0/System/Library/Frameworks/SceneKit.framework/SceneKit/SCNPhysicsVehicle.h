@class NSArray, SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior {
    SCNPhysicsBody *_chassisBody;
    NSArray *_wheels;
    SCNPhysicsWorld *_world;
    void *_vehicle;
    double _speedKmHour;
}

@property (readonly, nonatomic) double speedInKilometersPerHour;
@property (readonly, nonatomic) NSArray *wheels;
@property (readonly, nonatomic) SCNPhysicsBody *chassisBody;

+ (BOOL)supportsSecureCoding;
+ (id)vehicleWithChassisBody:(id)a0 wheels:(id)a1;

- (void)_update;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)physicsWorld;
- (void)_addToPhysicsWorld:(id)a0 definition:(struct { unsigned char x0[296]; })a1;
- (void)_copyDefinition:(struct { unsigned char x0[296]; } *)a0;
- (void)_createWheel:(id)a0;
- (void)_customDecodingOfSCNPhysicsVehicle:(id)a0;
- (void)_handleCreateIfNeeded:(BOOL)a0;
- (void)_initializeWheelsArray;
- (void)_willRemoveFromPhysicsWorld:(id)a0;
- (void)applyBrakingForce:(double)a0 forWheelAtIndex:(long long)a1;
- (void)applyEngineForce:(double)a0 forWheelAtIndex:(long long)a1;
- (void *)btVehicle;
- (BOOL)hasReferenceToPhysicsBody:(id)a0;
- (id)initWithChassisBody:(id)a0 wheels:(id)a1;
- (void)setSteeringAngle:(double)a0 forWheelAtIndex:(long long)a1;
- (id)wheelAtIndex:(unsigned long long)a0;

@end
