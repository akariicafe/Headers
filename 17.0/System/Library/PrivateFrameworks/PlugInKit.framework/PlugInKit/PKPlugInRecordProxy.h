@class NSString, LSApplicationExtensionRecord, NSUUID;
@protocol PKPropertyList, PKPlugInProxy;

@interface PKPlugInRecordProxy : NSObject <PKPlugInRecordProxy>

@property (retain, nonatomic) LSApplicationExtensionRecord *lsRecord;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) id<PKPlugInProxy> compatibilityObject;
@property (readonly) id<PKPropertyList> entitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)initWithUUID:(id)a0 error:(id *)a1;

@end
