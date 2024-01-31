@class NSDictionary, NSURL, NSArray;

@interface ICURLBagEnhancedAudioConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *bagEnhancedAudioDictionary;
@property (readonly, copy, nonatomic) NSURL *certificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, copy, nonatomic) NSArray *prefetchSKDs;

- (void).cxx_destruct;
- (id)initWithBagEnhancedAudioDictionary:(id)a0;
- (id)_urlForBagEnhancedAudioKey:(id)a0;

@end
