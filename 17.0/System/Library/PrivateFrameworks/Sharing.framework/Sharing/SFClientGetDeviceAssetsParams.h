@class NSString;

@interface SFClientGetDeviceAssetsParams : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short bluetoothProductID;
@property (nonatomic) unsigned int colorCode;
@property (copy, nonatomic) NSString *model;
@property (nonatomic) double timeoutSeconds;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
