@class NSDictionary, NSString;

@interface AMSLookupItemArtwork : NSObject

@property (readonly, nonatomic) NSDictionary *artworkDictionary;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) double width;

- (void).cxx_destruct;
- (id)URLWithHeight:(long long)a0 width:(long long)a1 cropStyle:(id)a2 format:(id)a3;
- (id)colorWithKind:(id)a0;
- (id)initWithArtworkDictionary:(id)a0;

@end
