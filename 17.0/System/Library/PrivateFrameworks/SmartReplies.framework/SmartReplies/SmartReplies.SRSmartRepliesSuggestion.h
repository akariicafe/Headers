@class NSString;

@interface SmartReplies.SRSmartRepliesSuggestion : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ title;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDynamicSuggestion;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(BOOL)a1;

@end
