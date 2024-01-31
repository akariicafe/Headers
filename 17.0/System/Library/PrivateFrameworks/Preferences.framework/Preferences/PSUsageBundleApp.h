@class NSString, NSArray, PSWeakReference;
@protocol PSStorageReporting;

@interface PSUsageBundleApp : NSObject {
    PSWeakReference *_storageReporterReference;
}

@property (weak, nonatomic) id<PSStorageReporting> usageBundleStorageReporter;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSArray *categories;
@property (nonatomic) float totalSize;
@property (nonatomic, getter=isDeletionRestricted) BOOL deletionRestricted;

+ (id)usageBundleAppForBundleWithIdentifier:(id)a0 withTotalSize:(float)a1;
+ (id)usageBundleAppForBundleWithIdentifier:(id)a0 withTotalSize:(float)a1 andCategories:(id)a2;

- (id)description;
- (void).cxx_destruct;

@end
