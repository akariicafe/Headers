@class MADService;

@interface AXMMADSService : NSObject

@property (retain, nonatomic) MADService *service;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
