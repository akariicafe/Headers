@class NSString, LSApplicationProxy;

@interface PSThirdPartyApp : NSObject {
    NSString *_localizedName;
}

@property (readonly, nonatomic) LSApplicationProxy *proxy;

- (void)load;
- (id)description;
- (id)localizedName;
- (void).cxx_destruct;
- (id)initWithApplicationProxy:(id)a0;

@end
