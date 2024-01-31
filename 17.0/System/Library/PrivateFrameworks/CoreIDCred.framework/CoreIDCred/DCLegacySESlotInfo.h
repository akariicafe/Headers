@class NSString;

@interface DCLegacySESlotInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long seSlot;
@property (nonatomic) BOOL isMissing;
@property (retain, nonatomic) NSString *partition;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSString *presentmentKeyIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSESlot:(long long)a0 isMissing:(BOOL)a1;
- (id)initWithSESlot:(long long)a0 isMissing:(BOOL)a1 partition:(id)a2 credentialIdentifier:(id)a3 presentmentKeyIdentifier:(id)a4;

@end
