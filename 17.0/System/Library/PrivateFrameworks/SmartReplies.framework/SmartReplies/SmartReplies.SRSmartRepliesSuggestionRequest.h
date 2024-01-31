@class _TtC12SmartReplies31SRSmartRepliesSuggestionRequest, NSArray, NSString, NSDate;

@interface SmartReplies.SRSmartRepliesSuggestionRequest : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ receivedMessages;
    void /* unknown type, empty encoding */ senderMessages;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ languageCode;
    void /* unknown type, empty encoding */ languageLastChangedDate;
    void /* unknown type, empty encoding */ requestDate;
    void /* unknown type, empty encoding */ recipients;
    void /* unknown type, empty encoding */ $__lazy_storage_$_preferredLocale;
    void /* unknown type, empty encoding */ $__lazy_storage_$_preferredLanguage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_concatenatedReceivedText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modifiedRequestWithContactPlaceholder;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic, copy) NSArray *receivedMessages;
@property (nonatomic) void /* unknown type, empty encoding */ includeLowConfidenceSuggestions;
@property (nonatomic) void /* unknown type, empty encoding */ skipPopulatingMetadata;
@property (nonatomic, copy) NSArray *senderMessages;
@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSDate *languageLastChangedDate;
@property (nonatomic) void /* unknown type, empty encoding */ includesDynamicSuggestions;
@property (nonatomic, copy) NSDate *requestDate;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSString *preferredLocale;
@property (nonatomic, copy) NSString *preferredLanguage;
@property (nonatomic, copy) NSString *concatenatedReceivedText;
@property (nonatomic, retain) _TtC12SmartReplies31SRSmartRepliesSuggestionRequest *modifiedRequestWithContactPlaceholder;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithType:(long long)a0 receivedMessages:(id)a1;
- (id)receivedMessagesAsStrings;
- (id)senderMessagesAsStrings;

@end
