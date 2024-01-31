@class NSURL, NSString;

@interface WBSOnDeviceModelEndpointInfo : NSObject

@property (readonly, copy, nonatomic) NSURL *endpointURL;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly, copy, nonatomic) NSString *checksumString;

- (void).cxx_destruct;
- (id)initWithEndpointURL:(id)a0 sizeInBytes:(unsigned long long)a1 checksumString:(id)a2;

@end
