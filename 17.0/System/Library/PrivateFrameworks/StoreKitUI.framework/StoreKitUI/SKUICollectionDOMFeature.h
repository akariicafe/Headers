@class NSString, IKAppContext;
@protocol SKUICollectionDOMFeatureTargetting;

@interface SKUICollectionDOMFeature : NSObject <SKUIJSDOMFeatureCollectionAppBridge, SKUIDOMFeature>

@property (weak, nonatomic) id<SKUICollectionDOMFeatureTargetting> collectionTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)a0;

- (void).cxx_destruct;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;
- (void)setEditing:(BOOL)a0 options:(id)a1;

@end
