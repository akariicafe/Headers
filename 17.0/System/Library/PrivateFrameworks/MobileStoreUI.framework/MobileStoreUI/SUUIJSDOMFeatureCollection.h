@protocol SUUIJSDOMFeatureCollectionAppBridge;

@interface SUUIJSDOMFeatureCollection : IKJSObject <SUUIJSDOMFeatureCollection>

@property (weak, nonatomic) id<SUUIJSDOMFeatureCollectionAppBridge> appBridge;

- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 :(id)a1;

@end
