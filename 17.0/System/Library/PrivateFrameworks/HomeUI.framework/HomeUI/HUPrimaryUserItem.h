@protocol HFMediaProfileContainer;

@interface HUPrimaryUserItem : HFUserItem

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 mediaProfileContainer:(id)a1 user:(id)a2;

@end
