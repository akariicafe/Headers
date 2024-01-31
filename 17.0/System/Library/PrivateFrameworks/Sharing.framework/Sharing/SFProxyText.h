@class NSString;

@interface SFProxyText : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned int slotIdentifier;
@property (readonly, nonatomic) double slotTextHeight;

- (unsigned long long)hash;
- (id)initWithText:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSlotIdentifier:(unsigned int)a0;
- (id)initWithSlotIdentifier:(unsigned int)a0 slotTextHeight:(double)a1;

@end
