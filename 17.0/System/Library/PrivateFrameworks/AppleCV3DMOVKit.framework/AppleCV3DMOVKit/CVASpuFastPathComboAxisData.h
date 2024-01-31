@interface CVASpuFastPathComboAxisData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) unsigned int packetType;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) unsigned int sample_id;
@property (nonatomic) unsigned int valid_data;
@property (nonatomic) int ax;
@property (nonatomic) int ay;
@property (nonatomic) int az;
@property (nonatomic) int unfiltered_ax;
@property (nonatomic) int unfiltered_ay;
@property (nonatomic) int unfiltered_az;
@property (nonatomic) int gx;
@property (nonatomic) int gy;
@property (nonatomic) int gz;
@property (nonatomic) int temperature;
@property (nonatomic) unsigned long long frameId;

+ (id)classes;
+ (double)getTimestamp:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFastPathIMUData:(id)a0;

@end
