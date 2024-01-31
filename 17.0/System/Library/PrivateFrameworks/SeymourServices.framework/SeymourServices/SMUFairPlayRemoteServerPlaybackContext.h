@class NSData;

@interface SMUFairPlayRemoteServerPlaybackContext : NSObject

@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, copy, nonatomic) NSData *blob;

- (void).cxx_destruct;
- (id)initWithBlob:(id)a0 identifier:(unsigned int)a1;

@end
