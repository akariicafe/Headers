@class NSString, NSMutableDictionary, NSDate;

@interface MBContainer : NSObject <NSCopying> {
    NSMutableDictionary *_plist;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int containerType;
@property (readonly, nonatomic) NSString *containerTypeString;
@property (readonly, nonatomic) NSString *volumeMountPoint;
@property (retain, nonatomic) NSString *containerDir;
@property (readonly, nonatomic) NSString *safeHarborDir;
@property (retain, nonatomic) NSDate *datePlacedInSafeHarbor;
@property (readonly, nonatomic) BOOL isSystemContainer;
@property (readonly, nonatomic) BOOL isSystemSharedContainer;
@property (readonly, nonatomic, getter=isSafeHarbor) BOOL safeHarbor;

+ (id)containerWithPropertyList:(id)a0 volumeMountPoint:(id)a1;
+ (id)uninstalledContainerWithDomainName:(id)a0 volumeMountPoint:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)domain;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)propertyListForBackupProperties;
- (id)copyWithVolumeMountPoint:(id)a0;
- (id)initWithPropertyList:(id)a0 volumeMountPoint:(id)a1;
- (id)propertyListForSafeHarborInfo;

@end
