@class NSDictionary, NSArray;

@interface WLKSiriSearchResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
