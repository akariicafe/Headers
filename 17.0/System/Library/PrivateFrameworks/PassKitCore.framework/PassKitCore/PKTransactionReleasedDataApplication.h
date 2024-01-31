@class NSString;

@interface PKTransactionReleasedDataApplication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long client;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *usageDescription;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToReleasedDataApplication:(id)a0;

@end
