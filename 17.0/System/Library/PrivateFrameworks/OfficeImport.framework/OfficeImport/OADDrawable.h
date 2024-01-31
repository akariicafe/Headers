@class OADDrawableProperties;
@protocol OADDrawableContainer, OADClient;

@interface OADDrawable : NSObject {
    BOOL mHidden;
    unsigned int mId;
    unsigned int mAltId;
    OADDrawableProperties *mDrawableProperties;
    id<OADClient> mClientData;
}

@property (weak) OADDrawable<OADDrawableContainer> *parent;

+ (unsigned int)generateOADDrawableId:(id)a0;

- (BOOL)hidden;
- (void)setHidden:(BOOL)a0;
- (id)description;
- (void)setClientData:(id)a0;
- (void).cxx_destruct;
- (id)clientData;
- (unsigned int)id;
- (id)drawableProperties;
- (void)setDrawableProperties:(id)a0;
- (void)setId:(unsigned int)a0;
- (id)createOrientedBoundsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned int)altId;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (id)createWordClientDataWithTextType:(int)a0;
- (id)ensureClientDataOfClass:(Class)a0;
- (id)initWithPropertiesClass:(Class)a0;
- (void)removeUnnecessaryOverrides;
- (void)setAltId:(unsigned int)a0;
- (void)setParentTextListStyle:(id)a0;

@end
