@class STSiriLocation, NSString, NSDate;

@interface STShowMapsSearchResultsRequest : AFSiriRequest {
    STSiriLocation *_searchResults;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)searchResults;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)_initWithLocation:(id)a0 extSessionGuid:(id)a1 extSessionGuidCreatedTimestamp:(id)a2;

@end
