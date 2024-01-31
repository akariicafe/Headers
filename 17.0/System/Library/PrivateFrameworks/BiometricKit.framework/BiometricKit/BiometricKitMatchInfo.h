@class NSArray, NSDictionary;

@interface BiometricKitMatchInfo : NSObject

@property (retain, nonatomic) NSArray *topology;
@property (retain, nonatomic) NSDictionary *details;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
