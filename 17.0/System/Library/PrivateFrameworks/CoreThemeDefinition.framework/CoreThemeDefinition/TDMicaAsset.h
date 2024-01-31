@class NSSet;

@interface TDMicaAsset : TDAsset

@property (retain, nonatomic) NSSet *productions;

- (id)production;
- (id)_productionWithRenditionsInProductions:(id)a0;
- (id)copyDataFromAttributes;
- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;
- (void)setAttributesFromCopyData:(id)a0;

@end
