@class NSString, NSMutableDictionary, PSSimStatusCache, CoreTelephonyClient;

@interface PSUICoreTelephonySubscriberCache : NSObject <CoreTelephonyClientSubscriberDelegate> {
    PSSimStatusCache *_simStatusCache;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *mobileEquipmentInfoDict;
@property (retain) NSMutableDictionary *isoCountryCodesDict;
@property (retain) NSMutableDictionary *shortLabelDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)willEnterForeground;
- (id)getLogger;
- (void).cxx_destruct;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)prlVersionDidChange:(id)a0 version:(id)a1;
- (void)shortLabelsDidChange;
- (id)isoCountryCode:(id)a0;
- (void)fetchCountryCodes;
- (void)fetchMobileEquipmentInfo;
- (void)fetchShortLabels;
- (id)initWithCoreTelephonyClient:(id)a0 simStatusCache:(id)a1;
- (id)mobileEquipmentInfo:(id)a0;
- (unsigned long long)mobileEquipmentInfoLength;
- (id)shortLabel:(id)a0;

@end
