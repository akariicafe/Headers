@class NSString, SFProxyText, NSUUID;

@interface _UIUserDefaultsActivityProxy : NSObject <SHSheetUserDefaultActivityProxy>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDisabled;
@property (retain, nonatomic) SFProxyText *activityTitle;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (nonatomic) unsigned int iconImageSlotID;
@property (nonatomic) BOOL canEdit;
@property (nonatomic) BOOL canMove;
@property (nonatomic) BOOL canHide;
@property (nonatomic) BOOL isHidden;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)labelSlot;

@end
