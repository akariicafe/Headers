@class NSArray, NSDictionary;

@interface BiometricKitTemplateInfo : NSObject

@property (retain, nonatomic) NSArray *topology;
@property (retain, nonatomic) NSDictionary *details;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
