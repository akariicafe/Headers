@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_sourceBundleIdentifier;
    NSString *_systemBuildVersion;
    NSString *_productType;
    unsigned long long _state;
    int _protocolVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly, copy) NSString *systemBuildVersion;
@property (readonly, copy) NSString *productType;
@property (readonly, getter=isActive) BOOL active;
@property (readonly, getter=isRestoreComplete) BOOL restoreComplete;
@property (readonly) int protocolVersion;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceBundleIdentifier:(id)a0 systemBuildVersion:(id)a1 productType:(id)a2 active:(BOOL)a3 restoreComplete:(BOOL)a4 protocolVersion:(int)a5;

@end
