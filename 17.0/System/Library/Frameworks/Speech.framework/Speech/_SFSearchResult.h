@class NSData, NSHTTPURLResponse;

@interface _SFSearchResult : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long searchType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithVoiceSearchResult:(id)a0;

@end
