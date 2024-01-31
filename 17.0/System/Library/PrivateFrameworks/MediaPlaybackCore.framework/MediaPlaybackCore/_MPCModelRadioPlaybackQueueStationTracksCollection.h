@class MPCModelGenericAVItemUserIdentityPropertySet, MPPropertySet, NSHashTable, MPCPlaybackRequestEnvironment, MPSectionedCollection, NSObject;
@protocol OS_dispatch_queue;

@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_activeModelGenericAVItems;
    BOOL _isSiriInitiated;
    BOOL _prioritizeStartupOverQuality;
    MPPropertySet *_itemProperties;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
}

@property (readonly, copy, nonatomic) MPSectionedCollection *trackModels;
@property (readonly, copy, nonatomic) MPSectionedCollection *tracks;
@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (readonly, nonatomic) long long numberOfItems;

- (void)removeAllItems;
- (void).cxx_destruct;
- (id)initWithPlaybackContext:(id)a0;
- (id)AVItemAtIndex:(long long)a0;
- (void)updateWithPersonalizedResponse:(id)a0;
- (BOOL)isExplicitItemAtIndex:(long long)a0;
- (long long)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)a0;

@end
