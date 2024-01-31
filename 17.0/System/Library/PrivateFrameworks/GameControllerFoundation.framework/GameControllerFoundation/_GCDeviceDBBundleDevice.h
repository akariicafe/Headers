@class NSString, NSArray, NSBundle;

@interface _GCDeviceDBBundleDevice : NSObject {
    NSBundle *_bundle;
    NSArray *_personalityPaths;
}

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSArray *ioMatchingPredicates;

- (id)init;
- (id)redactedDescription;
- (id)description;
- (id)personalities;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0 dictionary:(id)a1 error:(out id *)a2;

@end
