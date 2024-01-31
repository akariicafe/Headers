@class NSString;

@interface WFToggleFocusModeContextualActionFocusMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, copy, nonatomic) NSString *colorName;

- (unsigned long long)hash;
- (id)color;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 symbolName:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 symbolName:(id)a2 colorName:(id)a3;
- (id)initWithCoder:(id)a0;

@end
