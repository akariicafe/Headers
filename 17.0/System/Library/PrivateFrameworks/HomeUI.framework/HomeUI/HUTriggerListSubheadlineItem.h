@protocol HasRemoteAccessState;

@interface HUTriggerListSubheadlineItem : HFItem <HUItemMapsToView>

@property (readonly, nonatomic) id<HasRemoteAccessState> remoteAccessInfo;

- (id)init;
- (void).cxx_destruct;
- (id)_attributedDescription;
- (Class)mapsToViewClass;
- (id)_attributedDescriptionForNoRemoteAccess;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithRemoteAccessInfo:(id)a0;
- (id)resultsForRemoteAccessState:(unsigned long long)a0;

@end
