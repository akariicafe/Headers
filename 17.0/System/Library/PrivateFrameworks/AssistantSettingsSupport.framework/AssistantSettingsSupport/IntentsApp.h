@class NSString;

@interface IntentsApp : NSObject

@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL accessGranted;

- (void).cxx_destruct;
- (long long)compareWithIntentsApp:(id)a0;
- (id)initWithAppId:(id)a0 displayName:(id)a1 accessGranted:(BOOL)a2;

@end
