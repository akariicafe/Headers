@class AVOutputDevice, NSString;

@interface HMDMediaOutputDevice : HMFObject

@property (readonly) AVOutputDevice *av_OutputDevice;
@property (nonatomic) void *outputDevice;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) BOOL supportsWHA;
@property (readonly, nonatomic) BOOL supportsHAP;

- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithOutputDevice:(void *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldCreateAppleMediaAccessory;

@end
