@class NSString;

@interface STMutableFocusStatusDomainData : STFocusStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (copy, nonatomic) NSString *modeIdentifier;
@property (copy, nonatomic) NSString *modeName;
@property (copy, nonatomic) NSString *modeSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)applyDiff:(id)a0;
- (void)setModeName:(id)a0;
- (void)setModeSymbol:(id)a0;
- (void)setModeIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
