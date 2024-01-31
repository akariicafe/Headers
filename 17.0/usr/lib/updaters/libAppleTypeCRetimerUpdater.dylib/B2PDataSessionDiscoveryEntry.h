@class NSString;

@interface B2PDataSessionDiscoveryEntry : NSObject

@property (readonly) unsigned char sessionID;
@property (readonly) NSString *tag;

- (void).cxx_destruct;
- (id)initWithSessionID:(unsigned char)a0 tag:(id)a1;

@end
