@class NSString, NSArray;

@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *handleIdentifier;
@property (retain, nonatomic) NSString *photosPersonIdentifier;
@property (copy) NSString *contactIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCSCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayName:(id)a0 handles:(id)a1 handleIdentifier:(id)a2;
- (id)initWithDisplayName:(id)a0 handles:(id)a1 handleIdentifier:(id)a2 photosPersonIdentifier:(id)a3;

@end
