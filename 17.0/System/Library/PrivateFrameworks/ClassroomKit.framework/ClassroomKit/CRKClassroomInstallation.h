@class NSURL, NSString;

@interface CRKClassroomInstallation : NSObject <NSCopying>

@property (class, readonly, copy) CRKClassroomInstallation *iOSInstallation;
@property (class, readonly, copy) CRKClassroomInstallation *macOSInstallation;
@property (class, readonly, copy) CRKClassroomInstallation *preferredInstallation;
@property (class, readonly) BOOL anyInstallationExists;

@property (readonly, nonatomic) NSURL *classroomURL;
@property (readonly, copy, nonatomic) NSString *classroomBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *instructorKitImagePath;
@property (readonly, copy, nonatomic) NSString *instructordBundleIdentifier;

+ (id)installationWithClassroomBundleIdentifier:(id)a0 bundleHasContentsFolder:(BOOL)a1 instructordBundleIdentifier:(id)a2;
+ (id)instructorKitImagePathInBundle:(id)a0 hasContentsFolder:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClassroomURL:(id)a0 classroomBundleIdentifier:(id)a1 instructorKitImagePath:(id)a2 instructordBundleIdentifier:(id)a3;

@end
