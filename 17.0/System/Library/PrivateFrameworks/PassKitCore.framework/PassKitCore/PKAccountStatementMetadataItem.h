@class NSString, NSDate;

@interface PKAccountStatementMetadataItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long accountEventType;
@property (copy, nonatomic) NSString *originatorAltDSID;
@property (copy, nonatomic) NSString *zoneName;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL hasBeenProcessed;
@property (nonatomic) long long processedAttemptCount;
@property (copy, nonatomic) NSDate *lastProcessedDate;
@property (nonatomic) NSDate *lastReportDate;
@property (nonatomic) long long reportCount;
@property (nonatomic) unsigned long long error;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
