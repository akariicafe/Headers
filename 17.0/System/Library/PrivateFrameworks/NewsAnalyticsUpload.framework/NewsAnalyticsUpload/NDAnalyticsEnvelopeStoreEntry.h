@class NSString, NSDate;

@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry> {
    unsigned long long _submissionDateMillisecondsSince1970;
}

@property (copy, nonatomic) NSString *envelopeIdentifier;
@property (copy, nonatomic) NSDate *envelopeSubmissionDate;
@property (nonatomic) int envelopeContentType;

- (id)init;
- (unsigned long long)hash;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
