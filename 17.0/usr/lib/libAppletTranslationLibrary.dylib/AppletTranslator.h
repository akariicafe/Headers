@interface AppletTranslator : NSObject

+ (BOOL)configureSEWithPassInformation:(id)a0 transceiver:(id)a1 limitedToAID:(id)a2 seHasActivatedApplets:(BOOL *)a3 skipAllActivations:(BOOL)a4 error:(id *)a5;
+ (void)setLibraryHardwareCapabilities:(id)a0;
+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withError:(id *)a6;
+ (void)cleanup;
+ (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
+ (id)getAppletStateAndHistory:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (BOOL)appletCacheUpdated:(id)a0 serialNumber:(id)a1 isdSequenceCounter:(id)a2 transceiver:(id)a3 error:(id *)a4;
+ (void)initLibrary:(id /* block */)a0;
+ (BOOL)isLegacyApplet:(id)a0 withPackage:(id)a1 withModule:(id)a2;
+ (id)getNFCSettings;
+ (id)processEndOfTransaction:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (BOOL)setPlasticCardMode:(BOOL)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 serialNumber:(id)a4 transceiver:(id)a5 error:(id *)a6;
+ (void)initLibraryWithDelegate:(id)a0;
+ (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (id)checkSEExpressAppletCompatibilityWithPassInformation:(id)a0 error:(id *)a1;

@end
