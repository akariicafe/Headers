@class NSUUID, NSString, INShortcut;

@interface INVoiceShortcut : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *invocationPhrase;
@property (readonly, copy, nonatomic) INShortcut *shortcut;

- (id)userActivity;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUserActivity:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)intent;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifier:(id)a0 invocationPhrase:(id)a1 shortcut:(id)a2;
- (id)_initWithVCVoiceShortcut:(id)a0;

@end
