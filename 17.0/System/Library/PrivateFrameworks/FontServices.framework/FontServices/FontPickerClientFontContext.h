@class NSXPCListenerEndpoint, NSDictionary, NSXPCConnection;

@interface FontPickerClientFontContext : NSObject <FontServicesFontPickerSynchronizeProtocol> {
    BOOL _forClientContext;
    int _nestCount;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSXPCListenerEndpoint *clientEndpoint;
@property (retain, nonatomic) NSDictionary *locallyActivatedFontsInfo;
@property (nonatomic) BOOL clientHasFontAccessEntitlement;
@property (nonatomic) BOOL hideProfileFonts;

+ (id)sharedInstanceForEndpoint:(id)a0;
+ (void)invalidateSharedInstanceForEndpoint:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (id)initWithEndpoint:(id)a0;
- (void)checkin:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)runBlockInClientFontContext:(id /* block */)a0;
- (void)_doneWithLocallyActivatedFonts;
- (BOOL)_isFontFilePathAccepatableForClient:(id)a0 withFontEntitlement:(BOOL)a1 hideProfileFonts:(BOOL)a2;
- (void)_setupLocallyActivatedFonts;
- (void)enumerateFontFamilyNamesUsingBlock:(id /* block */)a0;
- (id)fontNamesForFontFamily:(id)a0 withFontEntitlement:(BOOL)a1 hideProfileFonts:(BOOL)a2;
- (void)fontSelected:(id)a0;
- (BOOL)isFontFamilyAcceptableForClient:(id)a0 withFontEntitlement:(BOOL)a1 hideProfileFonts:(BOOL)a2;
- (void)runWithClientFonts:(id /* block */)a0;
- (void)runWithFontNamesForFamilyName:(id)a0 usingBlock:(id /* block */)a1;
- (void)synchronize:(id)a0 deactivated:(id)a1 includingFontAssets:(BOOL)a2;

@end
