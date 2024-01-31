@class HMCharacteristic, NSSet, NAIdentity, NSString, NSError;

@interface HFCharacteristicReadResponse : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, nonatomic) NSSet *readTraits;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)valueWithExpectedClass:(Class)a0;
- (id)initWithCharacteristic:(id)a0 readTraits:(id)a1 value:(id)a2 error:(id)a3;
- (id)initWithHomeKitResponse:(id)a0 value:(id)a1 readTraits:(id)a2;

@end
