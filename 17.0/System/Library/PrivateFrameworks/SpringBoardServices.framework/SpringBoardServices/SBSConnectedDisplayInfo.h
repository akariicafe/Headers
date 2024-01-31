@class NSString, SBSRelativeDisplayArrangement, SBSDisplayModeSettings;

@interface SBSConnectedDisplayInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic, getter=isMirrored) BOOL mirrored;
@property (readonly, nonatomic) SBSRelativeDisplayArrangement *arrangement;
@property (readonly, nonatomic) unsigned long long supportedScales;
@property (readonly, nonatomic) SBSDisplayModeSettings *displayModeSettings;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 deviceName:(id)a1 displayName:(id)a2 size:(struct CGSize { double x0; double x1; })a3 mirrored:(BOOL)a4 supportedScales:(unsigned long long)a5 displayModeSettings:(id)a6 arrangement:(id)a7;

@end
