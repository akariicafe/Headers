@interface ATXProactiveSuggestionScoreSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double rawScore;
@property (nonatomic) long long suggestedConfidenceCategory;

+ (id)stringForSuggestedConfidenceCategory:(long long)a0;

- (id)initWithProto:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)fuzzyIsEqualToScoreSpecification:(id)a0;
- (id)jsonRawData;
- (id)description;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)isEqual:(id)a0;
- (id)initWithRawScore:(double)a0 suggestedConfidenceCategory:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
