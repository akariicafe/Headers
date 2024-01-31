@class NSArray, NSDictionary;

@interface WBSSearchSuggestionsFetcherResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) long long sizeInBytes;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSDictionary *timingData;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestions:(id)a0 sizeInBytes:(long long)a1 statusCode:(long long)a2 timingData:(id)a3;

@end
