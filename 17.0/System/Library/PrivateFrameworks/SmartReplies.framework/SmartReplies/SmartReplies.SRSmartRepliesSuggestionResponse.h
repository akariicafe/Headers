@class NSArray;

@interface SmartReplies.SRSmartRepliesSuggestionResponse : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ suggestions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *suggestions;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithSuggestions:(id)a0;

@end
