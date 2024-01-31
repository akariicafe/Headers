@class NSString, NSDecimalNumber;

@interface FHSmartFeatureDisputeDocumentSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSDecimalNumber *rankScore;
@property (nonatomic) unsigned long long type;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithUUID:(id)a0 rankScore:(id)a1 type:(unsigned long long)a2;
- (id)initWithRankedValue:(id)a0 type:(unsigned long long)a1;

@end
