@class NSMutableArray, NSString, NSUUID, NSArray, NSSet, CMIOExtensionSessionProvider, NSMutableDictionary;
@protocol CMIOExtensionSessionDeviceDelegate;

@interface CMIOExtensionSessionDevice : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<CMIOExtensionSessionDeviceDelegate> _delegate;
    NSMutableDictionary *_propertyStates;
    NSSet *_availableProperties;
    NSMutableArray *_streams;
    NSArray *_streamIDs;
    NSString *_description;
}

@property (readonly, weak, nonatomic) CMIOExtensionSessionProvider *provider;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic, getter=isRunningSomewhere) BOOL runningSomewhere;
@property (nonatomic) int deviceControlPID;
@property (weak, nonatomic) id<CMIOExtensionSessionDeviceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSUUID *deviceID;
@property (readonly, copy, nonatomic) NSString *legacyDeviceID;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, copy, nonatomic) NSArray *streams;
@property (readonly, copy, nonatomic) NSSet *availableProperties;

+ (id)sessionDeviceWithPropertyStates:(id)a0 streamsStates:(id)a1 provider:(id)a2;

- (void)unregister;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)completeTransaction;
- (id)cachedPropertyStateForProperty:(id)a0;
- (void)propertyStatesForProperties:(id)a0 reply:(id /* block */)a1;
- (void)setPropertyValues:(id)a0 reply:(id /* block */)a1;
- (id)cachedPropertyStatesForProperties:(id)a0;
- (id)initWithPropertyStates:(id)a0 streamsStates:(id)a1 provider:(id)a2;
- (void)setDeviceControlPID:(int)a0 reply:(id /* block */)a1;
- (void)updatePropertyStates:(id)a0;
- (void)updateStreamIDs:(id)a0;

@end
