@class NSString, NSSSizeVector;

@interface NSSUsageDataAppBundle : NSObject

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, retain, nonatomic) NSString *bundleVersion;
@property (readonly, retain, nonatomic) NSString *vendor;
@property (readonly, nonatomic) BOOL supportsManualPurge;
@property (readonly, retain, nonatomic) NSSSizeVector *size;

- (void).cxx_destruct;
- (id)mergeWith:(id)a0;
- (id)withSize:(id)a0 purge:(BOOL)a1;
- (id)initWithName:(id)a0 bundleIdentifier:(id)a1 bundleVersion:(id)a2 vendor:(id)a3 size:(id)a4 supportsPurge:(BOOL)a5;

@end
