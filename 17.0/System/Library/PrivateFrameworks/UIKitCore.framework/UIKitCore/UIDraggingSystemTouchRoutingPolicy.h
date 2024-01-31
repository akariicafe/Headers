@class NSDictionary, NSArray;

@interface UIDraggingSystemTouchRoutingPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *contextIDsToAlwaysSendTouchesByDisplayIdentifier;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property (nonatomic, getter=isHitTestingDisabled) BOOL hitTestingDisabled;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
