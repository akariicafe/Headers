@class NSString;

@interface RWIProtocolPageSearchResult : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *frameId;
@property (nonatomic) double matchesCount;
@property (copy, nonatomic) NSString *requestId;

- (id)initWithUrl:(id)a0 frameId:(id)a1 matchesCount:(double)a2;

@end
