@class NSSet, NSURL, NSData, PKTransactionReleasedDataApplication;

@interface PKTransactionReleasedData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *elements;
@property (retain, nonatomic) PKTransactionReleasedDataApplication *application;
@property (retain, nonatomic) NSURL *privacyPolicyURL;
@property (retain, nonatomic) NSData *certificateData;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isAgeVerificationElement:(id)a0;
- (BOOL)isEqualToReleasedData:(id)a0;
- (BOOL)isPortraitElement:(id)a0;
- (unsigned long long)verificationType;

@end
