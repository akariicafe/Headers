@class NSString, NSArray, NSDictionary, WBSCRDTPosition, WebBookmark;

@interface WBDevice : NSObject <NSCopying, WBBookmarkRepresentable, WBSCloudTabProvider>

@property (class, readonly, nonatomic) NSString *currentDeviceIdentifier;

@property (copy, nonatomic) NSArray *unnamedMutableTabGroups;
@property (readonly, copy, nonatomic) NSArray *unnamedTabGroups;
@property (readonly, copy, nonatomic) NSString *profileIdentifier;
@property (readonly, copy, nonatomic) NSArray *tabs;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic, getter=isRemoteDevice) BOOL remoteDevice;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (readonly, copy, nonatomic) NSDictionary *modifiedSettingsFieldsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *disambiguatedName;
@property (readonly, nonatomic, getter=isCloseRequestSupported) BOOL closeRequestSupported;

- (BOOL)isInserted;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBookmark:(id)a0;
- (int)_identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBookmark:(id)a0 unnamedTabGroups:(id)a1 profileIdentifier:(id)a2;
- (id)initWithTitle:(id)a0 deviceIdentifier:(id)a1 remote:(BOOL)a2 unnamedTabGroups:(id)a3 profileIdentifier:(id)a4;
- (void)mergeWithDevice:(id)a0;

@end
