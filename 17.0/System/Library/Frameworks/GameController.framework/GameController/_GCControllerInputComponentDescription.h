@class NSString, NSArray, _GCControllerInputDescription, _GCControllerInputComponent;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCControllerInputComponentDescription : NSObject <_GCControllerComponentDescription, _GCUpdatableIPCObjectDescription> {
    NSArray *_bindingDescriptions;
    _GCControllerInputComponent *_materializedInputComponent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) _GCControllerInputDescription *controllerInputDescriptions;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_applyBinding:(id)a0 toComponent:(id)a1;
- (id)createWithContext:(id)a0;
- (id)initWithIdentifier:(id)a0 controllerInputs:(id)a1 bindings:(id)a2;
- (id)materializeWithContext:(id)a0;
- (BOOL)update:(id)a0 withContext:(id)a1;

@end
