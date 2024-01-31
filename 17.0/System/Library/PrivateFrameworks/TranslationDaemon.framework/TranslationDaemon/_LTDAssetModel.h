@class NSString, NSArray, _LTAssetProgress, NSObject;
@protocol _LTDAssetModelProtocol;

@interface _LTDAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSArray *_localeIdentifiers;
}

@property (retain, nonatomic) NSObject<_LTDAssetModelProtocol> *provider;
@property (readonly, nonatomic) BOOL shouldPurgeWithLocale;
@property (readonly, nonatomic) BOOL isMultiLocaleAsset;
@property (readonly, nonatomic) _LTAssetProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForAssetState:(unsigned long long)a0;
+ (id)localeIdentifiersForLanguageName:(id)a0;

- (long long)downloadSize;
- (long long)formatVersion;
- (id)assetName;
- (id)assetId;
- (BOOL)isInstalled;
- (id)stateDescription;
- (unsigned long long)state;
- (BOOL)isDownloading;
- (id)status;
- (id)identifier;
- (long long)assetVersion;
- (long long)contentVersion;
- (id)supportedLanguages;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAvailable;
- (unsigned long long)assetType;
- (BOOL)isEmpty;
- (id)getLocalFileUrl;
- (BOOL)refreshState;
- (BOOL)supportsLocale:(id)a0;
- (BOOL)canBePurged;
- (long long)unarchivedSize;
- (id)localeIdentifiers;
- (BOOL)_isCompatibleWithThisDevice;
- (id)assetLanguage;
- (id)assetTypeName;
- (long long)compareAssetVersionReversed:(id)a0;
- (BOOL)isANEModel;
- (BOOL)isASRModel;
- (BOOL)isConfig;
- (BOOL)isMTModel;
- (BOOL)isNewerCompatibleVersionThan:(id)a0;
- (BOOL)isNewerVersionThan:(id)a0;
- (BOOL)isPhrasebook;
- (BOOL)isPremiumTextLID;
- (BOOL)isTTSModel;
- (id)managedAssetType;
- (long long)requiredCapabilityIdentifier;

@end
