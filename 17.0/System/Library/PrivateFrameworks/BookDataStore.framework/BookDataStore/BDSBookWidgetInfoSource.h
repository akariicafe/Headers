@protocol BDSServiceProtocol;

@interface BDSBookWidgetInfoSource : NSObject <BDSBookWidgetInfoProviding>

@property (readonly, nonatomic) id<BDSServiceProtocol> serviceProxy;

+ (id)sharedServiceProxy;

- (id)init;
- (void).cxx_destruct;
- (void)getBookWidgetInfoWithLimit:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
