@class NSString, NSArray, DYGPUToolsVersionInfo;

@interface DYDeviceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int platform;
@property (nonatomic) unsigned long long runtimeIdentifier;
@property (retain, nonatomic) NSString *permanentIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *metalVersion;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *hostProductType;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *hostVersion;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) unsigned int nativePointerSize;
@property (retain, nonatomic) DYGPUToolsVersionInfo *gputoolsVersionInfo;
@property (nonatomic) struct { double orientation; unsigned int width; unsigned int height; unsigned int scale; unsigned int type; } mainScreenDescriptor;
@property (retain, nonatomic) NSArray *supportedGraphicsAPIInfos;
@property (readonly, retain, nonatomic) NSString *summaryForBugReport;
@property (readonly, retain, nonatomic) NSString *descriptionForBugReport;
@property (readonly, nonatomic) BOOL isEmbeddedPlatform;

+ (unsigned int)defaultNativePointerSize;
+ (BOOL)isSimulatorPlatform:(int)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)supportsCapabilitiesOfGraphicsAPI:(id)a0 allowedClass:(Class)a1;
- (id)descriptionWithProfileName:(id)a0 showingProductType:(BOOL)a1 showingPermanentIdentifier:(BOOL)a2;
- (BOOL)versionIsOlderThan:(id)a0;

@end
