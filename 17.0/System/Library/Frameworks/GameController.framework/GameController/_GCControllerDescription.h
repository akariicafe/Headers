@class NSString, NSArray, GCController;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _GCControllerDescription : NSObject <_GCUpdatableIPCObjectDescription> {
    NSArray *_componentDescriptions;
    GCController *_materializedController;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<NSCopying, NSObject, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)controllerClass;

- (id)init;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToDescription:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 components:(id)a1;
- (id)materializeWithContext:(id)a0;
- (BOOL)update:(id)a0 withContext:(id)a1;

@end
