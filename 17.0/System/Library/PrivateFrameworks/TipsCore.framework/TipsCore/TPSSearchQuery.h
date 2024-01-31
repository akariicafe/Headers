@class NSString;

@interface TPSSearchQuery : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ searchTerm;
    void /* unknown type, empty encoding */ rankingModifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic) void /* unknown type, empty encoding */ options;
@property (nonatomic) void /* unknown type, empty encoding */ matchingStyle;
@property (nonatomic) void /* unknown type, empty encoding */ contentTypeFilter;
@property (nonatomic) void /* unknown type, empty encoding */ maxCount;
@property (nonatomic) void /* unknown type, empty encoding */ isCancelled;
@property (nonatomic, copy) id /* block */ rankingModifier;
@property (nonatomic, readonly) NSString *description;

+ (id)escapeSearchTerm:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 searchTerm:(id)a1;
- (id)initWithIdentifier:(id)a0 searchTerm:(id)a1 options:(unsigned long long)a2 matchingStyle:(long long)a3 contentTypeFilter:(long long)a4;
- (id)makeCSQueryWith:(id)a0;

@end
