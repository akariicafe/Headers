@class HFMediaPlaybackActionBuilder, NSArray, HFActionSetBuilder, HFPlaybackArchive, HFStaticItem, SKCloudServiceController, NSNumber, HUMediaItem;

@interface HUMediaSelectionItemManager : HFItemManager

@property (retain, nonatomic) HFMediaPlaybackActionBuilder *actionBuilder;
@property (retain, nonatomic) HFStaticItem *playbackStateAdjustVolumeOnlyItem;
@property (retain, nonatomic) HFStaticItem *playbackStatePauseItem;
@property (retain, nonatomic) HFStaticItem *playbackStateResumeItem;
@property (retain, nonatomic) HFStaticItem *playbackStatePlayItem;
@property (retain, nonatomic) NSArray *playbackStateItems;
@property (retain, nonatomic) HFStaticItem *mediaPickerItem;
@property (retain, nonatomic) HUMediaItem *chosenMediaItem;
@property (retain, nonatomic) NSArray *mediaPickerRowItems;
@property (retain, nonatomic) HFStaticItem *repeatItem;
@property (retain, nonatomic) HFStaticItem *shuffleItem;
@property (retain, nonatomic) NSArray *playbackOptionsItems;
@property (retain, nonatomic) HFStaticItem *useCurrentVolumeItem;
@property (retain, nonatomic) HFStaticItem *useCustomVolumeItem;
@property (retain, nonatomic) HFStaticItem *volumeSliderItem;
@property (retain, nonatomic) NSArray *customVolumeItems;
@property (retain, nonatomic) NSArray *volumeSliderItems;
@property (retain, nonatomic) SKCloudServiceController *cloudServiceController;
@property (retain, nonatomic) HFPlaybackArchive *lastSelectedArchive;
@property (retain, nonatomic) NSNumber *lastSelectedVolume;
@property (readonly, nonatomic) HFActionSetBuilder *actionSetBuilder;
@property (retain, nonatomic) HFStaticItem *selectedPlaybackStateItem;
@property (retain, nonatomic) HFStaticItem *selectedVolumeItem;
@property (retain, nonatomic) HFPlaybackArchive *pickedPlaybackArchive;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)_volumeForMediaAction;
- (id)initWithDelegate:(id)a0 mediaPlaybackActionBuilder:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void)mediaPlaybackOptionsItem:(id)a0 switchedOn:(BOOL)a1;
- (void)mediaVolumeValueChanged:(double)a0;
- (id)pickedPlaybackArchive;
- (id)selectedPlaybackStateItemBasedOnActionBuilderState;
- (id)selectedVolumeItemBasedOnActionBuilderState;
- (void)setPickedPlaybackArchive:(id)a0;

@end
