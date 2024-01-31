@class NSArray, NSDate;

@interface EMAddressMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *capabilities;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL supportsEncryptedSubject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCapabilities:(id)a0 date:(id)a1;

@end
