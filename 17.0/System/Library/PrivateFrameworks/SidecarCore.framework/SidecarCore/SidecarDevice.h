@class NSUUID, UTType, NSURL, NSString, NSDictionary;

@interface SidecarDevice : NSObject <NSSecureCoding> {
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    unsigned long long _status;
    NSString *_version;
    long long _rapportVersion;
    UTType *_deviceType;
    unsigned long long _generation;
    unsigned long long _cameraState;
    NSDictionary *_cameraCapabilities;
    BOOL _offersAdditionalDisplay;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long rapportVersion;
@property (readonly, nonatomic) UTType *deviceType;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSString *localizedDeviceType;
@property (readonly, nonatomic) NSString *model;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL hasHomeButton;
@property (nonatomic) unsigned long long cameraState;
@property (copy, nonatomic) NSDictionary *cameraCapabilities;
@property (nonatomic) BOOL offersAdditionalDisplay;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *deviceTypeIdentifier;

+ (id)allDevices;
+ (id)imageURLForDeviceTypeIdentifier:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateFromDevice:(id)a0 generation:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 model:(id)a1 name:(id)a2;
- (id)initWithIdentifier:(id)a0 model:(id)a1 name:(id)a2 version:(id)a3;

@end
