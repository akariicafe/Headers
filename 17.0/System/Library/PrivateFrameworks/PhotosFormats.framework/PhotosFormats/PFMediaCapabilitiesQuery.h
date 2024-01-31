@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject

@property (retain) NSMutableDictionary *capabilitiesInformation;

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithOptions:(id)a0;
- (void)addAssetBundleInformationToDictionary:(id)a0;
- (void)addCodecInformation;
- (void)addCodecSupportInformationToDictionary:(id)a0;
- (void)addHEIFContainerInformationToDictionary:(id)a0;
- (void)addLivePhotoInformationToDictionary:(id)a0;
- (void)addPlatformInformation;
- (void)addPlatformInformationFromDictionary:(id)a0;
- (void)addTranscodeChoiceWithOptions:(id)a0;
- (void)addVendorSpecificInformationWithOptions:(id)a0;
- (void)addVersion;
- (void)addVersion1And2HEVCCodecInformationToDictionary:(id)a0;
- (void)gatherCapabilitiesWithOptions:(id)a0;

@end
