@interface HFWalletUtilities : NSObject

+ (id)handleAddOrShowHomeKeyButtonTapForHome:(id)a0;
+ (id)walletKeyIconDescriptorForHome:(id)a0 shouldUseKeyholeAsset:(BOOL)a1 foriPhoneDevice:(BOOL)a2;
+ (BOOL)isWalletKeyDeviceStateCompatible:(id)a0;
+ (id)packageIconIdentifierForHome:(id)a0 shouldUseKeyholeAsset:(BOOL)a1;
+ (unsigned long long)pkPassHomeKeyLiveRenderTypeForHMHomeWalletKeyColor:(long long)a0;
+ (id)walletAppFromAppStoreURL;
+ (id)walletAppURL;
+ (id)walletKeyColorOfDeviceState:(id)a0;

@end
