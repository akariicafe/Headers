@class NSDate, NSString, NSArray, NSData, NSURL, NSUUID, NSDictionary, NSTimeZone;

@interface HDHRSOriginalSignedClinicalDataRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *rawContent;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, copy, nonatomic) NSURL *sourceURL;
@property (readonly, copy, nonatomic) NSString *issuerIdentifier;
@property (readonly, copy, nonatomic) NSArray *credentialTypes;
@property (readonly, copy, nonatomic) NSUUID *syncIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSDate *receivedDate;
@property (readonly, copy, nonatomic) NSTimeZone *receivedDateTimeZone;
@property (readonly, nonatomic) long long signatureStatus;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRawContent:(id)a0 sourceType:(long long)a1 sourceURL:(id)a2 issuerIdentifier:(id)a3 credentialTypes:(id)a4 syncIdentifier:(id)a5 metadata:(id)a6 receivedDate:(id)a7 receivedDateTimeZone:(id)a8 signatureStatus:(long long)a9;

@end
