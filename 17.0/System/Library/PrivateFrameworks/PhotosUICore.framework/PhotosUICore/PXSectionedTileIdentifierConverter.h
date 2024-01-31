@class PXSectionedDataSource, NSArray, NSIndexSet, NSString;

@interface PXSectionedTileIdentifierConverter : NSObject <PXTileIdentifierConverter>

@property (readonly, nonatomic) PXSectionedDataSource *fromDataSource;
@property (readonly, nonatomic) PXSectionedDataSource *toDataSource;
@property (readonly, nonatomic) NSArray *changeDetails;
@property (copy, nonatomic) NSIndexSet *reloadedTileKindsOnObjectChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0;
- (id)initWithFromDataSource:(id)a0 toDataSource:(id)a1 changeDetails:(id)a2;
- (BOOL)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(unsigned long long *)a1;

@end
