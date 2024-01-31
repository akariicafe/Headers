@class NSString, NSURL;

@interface PKExternalDestinationDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) long long eligibilityStatus;
@property (retain, nonatomic) NSString *osType;
@property (retain, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *deviceClass;
@property (retain, nonatomic) NSURL *imageURL2x;
@property (retain, nonatomic) NSURL *imageURL3x;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 serialNumber:(id)a1;
- (BOOL)isEqualToExternalDestinationDevice:(id)a0;

@end
