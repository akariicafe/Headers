@class NSString;

@interface MFLANHandoffContext : NSObject

@property (copy, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;

- (void)dealloc;

@end
