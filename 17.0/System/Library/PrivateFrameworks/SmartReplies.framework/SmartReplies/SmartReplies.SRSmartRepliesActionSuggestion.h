@class NSString;

@interface SmartReplies.SRSmartRepliesActionSuggestion : SmartReplies.SRSmartRepliesSuggestion {
    void /* unknown type, empty encoding */ attribution;
}

@property (nonatomic, readonly) NSString *attribution;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isRichSuggestion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ metadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(BOOL)a1;
- (id)initWithType:(long long)a0 title:(id)a1 attribution:(id)a2 isRichSuggestion:(BOOL)a3 metadata:(id)a4;

@end
