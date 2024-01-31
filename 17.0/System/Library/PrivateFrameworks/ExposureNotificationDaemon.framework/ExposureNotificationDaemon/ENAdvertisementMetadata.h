@class NSString;

@interface ENAdvertisementMetadata : NSObject

@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSString *versionString;
@property (readonly, nonatomic) char txPower;
@property (readonly, nonatomic) unsigned char calibrationConfidence;

- (unsigned char)attenuationForRSSI:(char)a0 saturated:(BOOL)a1;
- (id)initWithVersion:(long long)a0 txPower:(char)a1 calibrationConfidence:(unsigned char)a2;

@end
