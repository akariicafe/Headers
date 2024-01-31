@class NSString, NSDictionary, NSNumber;

@interface SDSeedingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) SDSeedingConfiguration *nullConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *enrollmentMetadata;
@property (nonatomic) long long seedProgram;
@property (retain, nonatomic) NSString *assetAudience;
@property (retain, nonatomic) NSString *catalog;
@property (retain, nonatomic) NSNumber *seedProgramID;
@property (retain, nonatomic) NSNumber *accountID;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)currentConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBetaProgram:(id)a0;

@end
