@class NSString, BDSServiceProxy;

@interface BDSBookWidgetInfoManager : NSObject <BDSBookWidgetInfoManagerService>

@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setBookWidgetInfo:(id)a0 completion:(id /* block */)a1;

@end
