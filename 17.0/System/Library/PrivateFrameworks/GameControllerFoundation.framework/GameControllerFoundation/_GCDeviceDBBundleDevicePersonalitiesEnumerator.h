@class NSEnumerator, NSBundle;

@interface _GCDeviceDBBundleDevicePersonalitiesEnumerator : NSEnumerator {
    NSBundle *_bundle;
    NSEnumerator *_personalitiesPaths;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0 personalityPaths:(id)a1;

@end
