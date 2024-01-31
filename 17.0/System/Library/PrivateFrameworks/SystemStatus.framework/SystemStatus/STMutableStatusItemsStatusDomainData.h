@class STMutableDictionaryData, NSArray, NSString, STMutableListData;

@interface STMutableStatusItemsStatusDomainData : STStatusItemsStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableListData *statusItemsAttributionListData;
@property (readonly, copy, nonatomic) STMutableDictionaryData *visualDescriptorsByIdentifierDictionaryData;
@property (copy, nonatomic) NSArray *attributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAttribution:(id)a0;
- (BOOL)applyDiff:(id)a0;
- (void)setAttributions:(id)a0;
- (void)removeAttribution:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setVisualDescriptor:(id)a0 forStatusItemWithIdentifier:(id)a1;
- (id)initWithStatusItemsAttributionListData:(id)a0 visualDescriptorsByIdentifierDictionaryData:(id)a1;

@end
