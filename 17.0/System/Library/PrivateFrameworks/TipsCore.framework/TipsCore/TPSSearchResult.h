@class NSString, NSArray;

@interface TPSSearchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ suggestions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSArray *suggestions;
@property (nonatomic, retain) void /* unknown type, empty encoding */ query;

+ (id)makeResultWith:(id)a0 items:(id)a1 suggestions:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 items:(id)a1 suggestions:(id)a2;

@end
