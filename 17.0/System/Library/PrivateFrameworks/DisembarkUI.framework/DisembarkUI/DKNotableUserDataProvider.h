@class NSString;
@protocol DKFindMyProvider, DKStorageProvider, DKTelephonyProvider, DKWalletProvider, DKAccountProvider;

@interface DKNotableUserDataProvider : NSObject <DKNotableUserDataProvider>

@property (retain, nonatomic) id<DKAccountProvider> accountProvider;
@property (retain, nonatomic) id<DKFindMyProvider> findMyProvider;
@property (retain, nonatomic) id<DKStorageProvider> storageProvider;
@property (retain, nonatomic) id<DKTelephonyProvider> telephonyProvider;
@property (retain, nonatomic) id<DKWalletProvider> walletProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
