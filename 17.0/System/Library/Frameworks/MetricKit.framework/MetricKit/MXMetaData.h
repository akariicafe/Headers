@class NSString, NSObject;
@protocol OS_os_log;

@interface MXMetaData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL errorRetrievingAppRecord;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) NSString *regionFormat;
@property (retain) NSString *osVersion;
@property (retain) NSString *deviceType;
@property (retain) NSString *applicationBuildVersion;
@property (retain) NSString *platformArchitecture;
@property (retain) NSString *bundleID;
@property BOOL isTestFlightApp;
@property int pid;
@property BOOL lowPowerModeEnabled;

- (id)JSONRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithRegionFormat:(id)a0 osVersion:(id)a1 deviceType:(id)a2 appBuildVersion:(id)a3 platformArchitecture:(id)a4 bundleID:(id)a5;
- (id)DictionaryRepresentation;
- (id)initWithRegionFormat:(id)a0 osVersion:(id)a1 deviceType:(id)a2 appBuildVersion:(id)a3;
- (id)initWithRegionFormat:(id)a0 osVersion:(id)a1 deviceType:(id)a2 appBuildVersion:(id)a3 bundleID:(id)a4;
- (id)initWithRegionFormat:(id)a0 osVersion:(id)a1 deviceType:(id)a2 appBuildVersion:(id)a3 platformArchitecture:(id)a4;
- (id)initWithRegionFormat:(id)a0 osVersion:(id)a1 deviceType:(id)a2 appBuildVersion:(id)a3 platformArchitecture:(id)a4 bundleID:(id)a5 pid:(int)a6 isTestFlightApp:(BOOL)a7;

@end
