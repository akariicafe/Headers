@class NSDictionary;

@interface LPiTunesMediaLookupItemArtwork : NSObject {
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;

+ (id)colorForColorKind:(id)a0 inColorDictionary:(id)a1;

- (id)colors;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)URLWithHeight:(long long)a0 width:(long long)a1 cropStyle:(id)a2 format:(id)a3;

@end
