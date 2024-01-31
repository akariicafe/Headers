@class NSArray, NSString, NSDate;

@interface PREResponsesExperimentSuggestionsRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *receivedMessages;
@property (copy, nonatomic) NSArray *senderMessages;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSDate *languageLastChangedDate;
@property (nonatomic) BOOL includesDynamicSuggestions;
@property (retain, nonatomic) NSDate *requestDate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReceivedMessages:(id)a0;

@end
