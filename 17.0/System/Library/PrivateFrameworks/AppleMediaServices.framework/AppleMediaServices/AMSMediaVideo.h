@class NSURL, NSDictionary;

@interface AMSMediaVideo : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *videoDictionary;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)name;

@end
