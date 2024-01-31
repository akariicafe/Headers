@class NSString, NSSet;

@interface SFShareSheetRecipient : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *realName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSSet *formattedHandles;
@property (readonly, nonatomic) NSString *contactIdentifier;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNode:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAirDropNode:(id)a0;
- (id)initWithRealName:(id)a0 displayName:(id)a1 formattedHandles:(id)a2 contactIdentifier:(id)a3;

@end
