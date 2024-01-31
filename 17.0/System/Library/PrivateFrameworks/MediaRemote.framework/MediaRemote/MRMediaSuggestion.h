@class MRArtwork, NSString, INPlayMediaIntent, INMediaItem;

@interface MRMediaSuggestion : NSObject {
    NSString *_bundleID;
    MRArtwork *_artwork;
    INMediaItem *_container;
    INPlayMediaIntent *_intent;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) MRArtwork *artwork;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)playOnDeviceWithUID:(id)a0 completion:(id /* block */)a1;
- (void)playOnEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)playWithCompletion:(id /* block */)a0;

@end
