@class NSString, NSArray;

@interface WFEntityPickerDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *parameterKey;
@property (readonly, nonatomic) NSArray *items;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithActionIdentifier:(id)a0 parameterKey:(id)a1 items:(id)a2 attribution:(id)a3 prompt:(id)a4;

@end
