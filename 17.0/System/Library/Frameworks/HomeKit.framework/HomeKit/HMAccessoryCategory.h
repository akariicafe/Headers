@class NSString;

@interface HMAccessoryCategory : NSObject <HMFDumpState, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly) BOOL isWiFiRouterAccessoryCategory;
@property (readonly) BOOL isTelevisionAccessoryCategory;
@property (readonly, copy) NSString *categoryType;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)dumpState;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(id)a0 name:(id)a1;
- (id)localizedDescriptionPlural;

@end
