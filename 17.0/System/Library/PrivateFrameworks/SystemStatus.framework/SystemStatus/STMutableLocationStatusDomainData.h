@class NSArray, NSString, STMutableListData;

@interface STMutableLocationStatusDomainData : STLocationStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableListData *locationAttributionListData;
@property (copy, nonatomic) NSArray *attributions;
@property (nonatomic) unsigned long long activeDisplayModes;
@property (copy, nonatomic) NSArray *locationAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAttribution:(id)a0;
- (BOOL)applyDiff:(id)a0;
- (void)setLocationAttributions:(id)a0;
- (void)setAttributions:(id)a0;
- (void)addLocationAttribution:(id)a0;
- (id)initWithLocationAttributionListData:(id)a0 activeDisplayModes:(unsigned long long)a1;
- (void)removeAttribution:(id)a0;
- (void)setActiveDisplayModes:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeLocationAttribution:(id)a0;

@end
