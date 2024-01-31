@class NSNumber, HFPlaybackArchive;

@interface HREMediaPlaybackActionMap : HREActionMap

@property (nonatomic) long long targetPlaybackState;
@property (retain, nonatomic) NSNumber *targetVolume;
@property (retain, nonatomic) HFPlaybackArchive *playbackArchive;

+ (id)actionMapWithState:(long long)a0 volume:(id)a1 playbackArchive:(id)a2;
+ (id)emptyMap;
+ (id)statelessActionMapWithVolume:(id)a0 playbackArchive:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)flattenedMapEvaluatedForObject:(id)a0;
- (id)addingCondition:(id)a0;
- (id)initWithState:(long long)a0 volume:(id)a1 playbackArchive:(id)a2;
- (void)mergeMap:(id)a0 intoMap:(id)a1;
- (id)mergeWithActionMaps:(id)a0;

@end
