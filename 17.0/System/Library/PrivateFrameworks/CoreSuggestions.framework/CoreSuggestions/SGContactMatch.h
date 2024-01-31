@class NSArray, SGRecordId, SGContact, SGObject, SGMatchedDetails;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding> {
    SGRecordId *_matchingFieldRecordId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SGContact *contact;
@property (readonly, nonatomic) SGObject *matchingField;
@property (readonly, nonatomic) long long matchingFieldType;
@property (readonly, nonatomic) NSArray *matchTokens;
@property (readonly, nonatomic) SGMatchedDetails *matchedDetails;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContact:(id)a0 matchTokens:(id)a1 matchInfo:(id)a2;
- (id)initWithContact:(id)a0 matchingEmailAddressRecordId:(id)a1;
- (id)initWithContact:(id)a0 matchingEmailAddressRecordId:(id)a1 matchTokens:(id)a2;
- (id)initWithContact:(id)a0 matchingFieldRecordId:(id)a1 matchTokens:(id)a2;
- (id)initWithContact:(id)a0 matchingNameRecordId:(id)a1;
- (id)initWithContact:(id)a0 matchingNameRecordId:(id)a1 matchTokens:(id)a2;
- (id)initWithContact:(id)a0 matchingPhoneRecordId:(id)a1 matchTokens:(id)a2;
- (id)initWithContact:(id)a0 matchingRecordId:(id)a1 matchType:(long long)a2 matchTokens:(id)a3;
- (BOOL)isEqualToContactMatch:(id)a0;

@end
