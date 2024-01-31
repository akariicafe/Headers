@class NSMutableArray;

@interface ICQQuotaAppDetailsResponse : AAResponse

@property (readonly, nonatomic) NSMutableArray *apps;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (id)description;
- (void)addApps:(id)a0;
- (void).cxx_destruct;

@end
