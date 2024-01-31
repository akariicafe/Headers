@class LSPropertyList;

@interface __HMDBundleApplicationInfo : HMDApplicationInfo {
    LSPropertyList *_entitlements;
}

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEntitledForAPIAccess;
- (BOOL)isEntitledForSPIAccess;

@end
