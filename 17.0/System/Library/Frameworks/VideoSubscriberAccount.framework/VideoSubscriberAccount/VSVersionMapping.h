@class NSDictionary, NSString;

@interface VSVersionMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;
@property (readonly, nonatomic) NSString *iOSSupportVersion;

+ (id)sharedInstance;
+ (id)systemVersion;

- (id)init;
- (void).cxx_destruct;

@end
