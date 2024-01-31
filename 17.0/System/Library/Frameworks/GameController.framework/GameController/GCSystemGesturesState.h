@class NSString, NSSet;

@interface GCSystemGesturesState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSSet *disabledSystemGestureInputNames;
@property (retain, nonatomic) NSSet *enabledSystemGestureInputNames;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEnabledSystemGestures:(id)a0 disabledSystemGestures:(id)a1 bundleIdentifier:(id)a2;

@end
