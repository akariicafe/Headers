@class NSArray;

@interface KNSoundtrack : TSPObject <NSCopying> {
    float _volume;
    long long _mode;
    NSArray *_media;
}

@property (nonatomic) float volume;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSArray *media;

+ (BOOL)needsObjectUUID;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithSoundtrackMedia:(id)a0 context:(id)a1;
- (void)loadFromUnarchiver:(id)a0;

@end
