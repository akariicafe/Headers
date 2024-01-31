@class NSUUID, NSNumber, LNValue;

@interface LNDisambiguationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSNumber *selectedIndex;
@property (readonly, nonatomic) LNValue *value;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 selectedIndex:(id)a1 value:(id)a2;

@end
