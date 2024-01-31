@class NSString, MPMediaItem, NSURL, OKProducerPreset;

@interface PUSlideshowMediaItem : NSObject {
    MPMediaItem *_mediaItem;
    OKProducerPreset *_preset;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSURL *audioURL;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)mediaItemForType:(long long)a0 uniqueIdentifier:(id)a1;
+ (id)mediaItemsForOKThemes;

- (id)init;
- (unsigned long long)hash;
- (id)_initWithType:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWitMediaItem:(id)a0;
- (id)initWitPreset:(id)a0;

@end
