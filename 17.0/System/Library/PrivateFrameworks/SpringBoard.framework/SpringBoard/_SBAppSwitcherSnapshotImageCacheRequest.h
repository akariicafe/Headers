@class SBDisplayItem, NSString, SBAppLayout, XBApplicationSnapshot;

@interface _SBAppSwitcherSnapshotImageCacheRequest : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) unsigned long long sequenceID;
@property (nonatomic) BOOL loadFullSizeSnapshot;
@property (retain, nonatomic) SBAppLayout *appLayout;
@property (retain, nonatomic) SBDisplayItem *displayItem;
@property (retain, nonatomic) XBApplicationSnapshot *snapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithSequenceID:(unsigned long long)a0;

@end
