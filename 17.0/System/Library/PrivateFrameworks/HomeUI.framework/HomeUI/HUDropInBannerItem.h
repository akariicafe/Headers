@class DIDevice, HMAudioAnalysisEventBulletin;

@interface HUDropInBannerItem : HUBannerItem

@property (readonly, nonatomic) DIDevice *device;
@property (retain, nonatomic) HMAudioAnalysisEventBulletin *eventBulletin;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 device:(id)a1 eventBulletin:(id)a2;

@end
