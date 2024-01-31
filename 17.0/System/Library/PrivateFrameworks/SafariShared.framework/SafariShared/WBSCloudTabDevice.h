@class NSString, NSDictionary, NSArray, NSDate;

@interface WBSCloudTabDevice : NSObject <NSCopying, WBSCloudTabProvider>

@property (readonly, nonatomic) BOOL hasDuplicateName;
@property (readonly, nonatomic, getter=isEphemeralDevice) BOOL ephemeralDevice;
@property (readonly, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isCloudKitBookmarkSyncingSupported) BOOL cloudKitBookmarkSyncingSupported;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *disambiguatedName;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic, getter=isCloseRequestSupported) BOOL closeRequestSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCloudTabDeviceDictionary:(id)a0;
+ (id)_dictionaryWithDeviceName:(id)a0 lastModified:(id)a1 hasDuplicateName:(BOOL)a2 tabs:(id)a3 isEphemeralDevice:(BOOL)a4;
+ (unsigned long long)tabCountInDictionary:(id)a0;
+ (id)deviceNameInDictionary:(id)a0;
+ (id)lastModifiedDateInDictionary:(id)a0;
+ (BOOL)hasDuplicateDeviceNameInDictionary:(id)a0;
+ (BOOL)isEphemeralDeviceInDictionary:(id)a0;

- (id)initWithDeviceName:(id)a0 lastModified:(id)a1 hasDuplicateName:(BOOL)a2 tabs:(id)a3 uuid:(id)a4 isEphemeralDevice:(BOOL)a5;
- (id)deviceBySettingDisambiguatedName:(id)a0;
- (id)deviceByRemovingTab:(id)a0;
- (id)initWithDeviceName:(id)a0 lastModified:(id)a1 hasDuplicateName:(BOOL)a2 tabs:(id)a3 uuid:(id)a4;
- (id)deviceByRemovingTabs:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 uuid:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
