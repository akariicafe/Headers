@class NSArray, NSMutableArray;
@protocol HMDFetchedSettingsDriver;

@interface HMDFetchedAccessorySettingsControllerKeyPathMapItem : NSObject {
    NSMutableArray *_keyPathsInternal;
}

@property (readonly) NSArray *keyPaths;
@property (readonly) id<HMDFetchedSettingsDriver> driver;

- (void).cxx_destruct;
- (id)initWithDriver:(id)a0 keyPaths:(id)a1;

@end
