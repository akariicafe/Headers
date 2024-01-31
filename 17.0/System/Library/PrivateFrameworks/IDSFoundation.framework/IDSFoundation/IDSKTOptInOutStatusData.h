@class NSString, NSData, NSNumber;

@interface IDSKTOptInOutStatusData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSData *publicAccountKey;
@property (retain, nonatomic) NSNumber *optInStatus;
@property (retain, nonatomic) NSString *ktApplication;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
