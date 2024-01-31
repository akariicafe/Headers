@class NSString, NSSet;

@interface GCDeviceElementDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSSet *additionalAliases;
@property (readonly, getter=isRemappable) BOOL remappable;
@property (readonly, getter=isMappableToSystemGestures) BOOL mappableToSystemGestures;
@property (readonly, getter=isBoundToSystemGesture) BOOL boundToSystemGesture;
@property (readonly) NSString *nameLocalizationKey;
@property (readonly) NSString *symbolName;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
