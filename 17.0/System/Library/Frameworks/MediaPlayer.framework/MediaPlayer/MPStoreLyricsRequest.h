@class MPModelSong;

@interface MPStoreLyricsRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelSong *song;

+ (BOOL)supportsLyricsForURLBag:(id)a0;
+ (BOOL)supportsLyricsForURLBagDictionary:(id)a0;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
