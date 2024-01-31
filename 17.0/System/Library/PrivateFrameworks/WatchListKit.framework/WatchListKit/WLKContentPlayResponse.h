@class NSDictionary, WLKPlayable;

@interface WLKContentPlayResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) WLKPlayable *playable;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
