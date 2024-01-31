@class NSString, NSArray;
@protocol PXAudioAsset, PXDisplayAsset;

@interface PXMockAudioAsset : NSObject <PXStorySongResource, PXMutableMockAudioAsset, PXAudioAsset>

@property (readonly, nonatomic) id<PXAudioAsset> px_storyResourceSongAsset;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *artworkURLFormat;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *albumTitle;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long pace;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } exportableDuration;
@property (copy, nonatomic) NSArray *entryPoints;
@property (copy, nonatomic) NSString *colorGradeCategory;
@property (retain, nonatomic) Class audioSessionClass;
@property (readonly, copy, nonatomic) NSString *assetTagsDescription;
@property (readonly, nonatomic) long long catalog;
@property (readonly, nonatomic) id<PXDisplayAsset> artworkDisplayAsset;
@property (readonly, nonatomic) id<PXAudioAsset> previewAudioAsset;
@property (readonly, nonatomic) Class defaultMediaProviderClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithConfiguration:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)artworkURLForTargetPixelSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isAudioEqualToAsset:(id)a0;

@end
