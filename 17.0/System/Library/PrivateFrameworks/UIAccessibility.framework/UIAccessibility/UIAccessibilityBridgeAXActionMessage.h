@class NSData;

@interface UIAccessibilityBridgeAXActionMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int axAction;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSData *elementRefData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAxAction:(int)a0 withValue:(id)a1 forElementRefData:(id)a2;

@end
