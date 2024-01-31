@class NSMutableDictionary;

@interface _DDUIAccountManager : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSMutableDictionary *iCloudToAltDSIDDictionary;
@property (retain, nonatomic) NSMutableDictionary *iCloudToNameComponentsDictionary;

- (id)init;
- (void).cxx_destruct;
- (void)_findMemberForiCloudAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateMemberDataForiCloudAccount:(id)a0 completion:(id /* block */)a1;
- (void)altDsidForiCloudAccount:(id)a0 completion:(id /* block */)a1;
- (void)nameComponentsForiCloudAccount:(id)a0 completion:(id /* block */)a1;

@end
