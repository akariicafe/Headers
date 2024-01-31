@class NSString, NSArray, NSDictionary, NSFormatter;

@interface HFAccessorySettingsEntity : NSObject

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) NSString *sortKey;
@property (readonly, copy, nonatomic) NSString *localizedHeader;
@property (readonly, copy, nonatomic) NSString *localizedFooter;
@property (readonly, copy, nonatomic) NSString *overrideLocalizedTitleKey;
@property (readonly, copy, nonatomic) NSArray *booleanKeyPathDependencies;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) long long interfaceModality;
@property (readonly, nonatomic) BOOL requiresDependenciesToShowSetting;
@property (readonly, nonatomic) BOOL previewAccessory;
@property (readonly, copy, nonatomic) NSString *previewValueKeyPath;
@property (readonly, copy, nonatomic) NSFormatter *previewValueFormatter;
@property (readonly, copy, nonatomic) NSFormatter *footerTitleFormatter;
@property (readonly, copy, nonatomic) NSFormatter *headerTitleFormatter;
@property (readonly, nonatomic) BOOL alwaysShowGroup;
@property (readonly, nonatomic) BOOL wantsSeparateSectionPerGroup;
@property (readonly, copy, nonatomic) NSString *adapterIdentifier;
@property (readonly, nonatomic) BOOL showInSeperateSection;
@property (readonly, nonatomic) BOOL isSoftwareVersionNeeded;

+ (id)settingsAtURL:(id)a0 error:(id *)a1;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
