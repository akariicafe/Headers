@class NSString, NSArray, NSDictionary, USKScene, USKToken;

@interface USKNode : USKObject {
    struct UsdPrim { int _type; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData *px; } _p; } _prim; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _primPart; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _propPart; } _proxyPrimPath; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *_ptrAndBits; } _rep; } _propName; } _prim;
    USKScene *_owner;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) USKToken *typeName;
@property (readonly, nonatomic) NSArray *schemaTypes;
@property (readonly, nonatomic) NSDictionary *properties;

- (unsigned long long)hash;
- (id)propertyList;
- (id)parent;
- (id)specifier;
- (id).cxx_construct;
- (void)setSpecifier:(id)a0;
- (id)path;
- (void).cxx_destruct;
- (id)name;
- (id)metadata;
- (BOOL)removeProperty:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearReferences;
- (id)dictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1;
- (void)applyType:(id)a0;
- (id)newPropertyWithName:(id)a0 type:(id)a1 role:(id)a2;
- (BOOL)setDictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1 value:(id)a2;
- (BOOL)setMetadataWithKey:(id)a0 value:(id)a1;
- (id)childIterator;
- (id)metadataWithKey:(id)a0;
- (id)property:(id)a0;
- (id)customMetadataWithKey:(id)a0;
- (BOOL)hasVariantSets;
- (id)inheritedMaterialBinding;
- (id)inheritedProperty:(id)a0;
- (id)inheritedSkeletonAnimationBinding;
- (id)inheritedSkeletonBinding;
- (id)loadedChildIterator;
- (BOOL)selectVariant:(id)a0 variantSet:(id)a1;
- (id)variantsWithVariantSet:(id)a0;
- (id)initWithUsdPrim:(struct UsdPrim { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })a0 withSceneOwner:(id)a1;
- (struct UsdPrim { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })usdPrim;
- (id)subtreeIterator;
- (void)addReferenceWithPath:(id)a0 nodePath:(id)a1;
- (void)addReferenceWithPath:(id)a0 nodePath:(id)a1 offset:(id)a2;
- (void)addReferenceWithURL:(id)a0 nodePath:(id)a1;
- (void)addVariant:(id)a0 variantSet:(id)a1;
- (void)addVariantSet:(id)a0;
- (BOOL)clearVariantSelectionForVariantSet:(id)a0;
- (id)createUniqueGeomSubset:(id)a0 elementType:(id)a1 indices:(id)a2 familyName:(id)a3 familyType:(id)a4;
- (BOOL)editVariant:(id)a0 variantSet:(id)a1 block:(id /* block */)a2;
- (id)getAllGeomSubsets;
- (id)getGeomSubsetElementTypeAttr;
- (id)getGeomSubsetFamilyName;
- (id)getGeomSubsetIndicesAttr;
- (id)getGeomSubsets:(id)a0 familyName:(id)a1;
- (BOOL)hasSchemaType:(id)a0;
- (BOOL)hasVariantSet:(id)a0;
- (id)initWithUsdPrim:(struct UsdPrim { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })a0;
- (BOOL)isInstanceNode;
- (id)loadedSubtreeIterator;
- (id)masterNode;
- (id)newCustomPropertyWithName:(id)a0 type:(id)a1 role:(id)a2;
- (id)newPropertyWithName:(id)a0 type:(id)a1 role:(id)a2 variability:(BOOL)a3;
- (BOOL)setCustomMetadata:(id)a0 value:(id)a1;
- (id)variantSets;

@end
