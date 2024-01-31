@class NSArray;

@interface SFPeopleSuggesterParams : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contactIDs;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned int maxPeople;
@property (nonatomic) BOOL excludeBackfills;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
