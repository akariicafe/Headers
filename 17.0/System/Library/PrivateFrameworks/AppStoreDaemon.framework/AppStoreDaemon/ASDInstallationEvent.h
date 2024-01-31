@class NSString, NSNumber;

@interface ASDInstallationEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long phase;
@property (readonly) long long terminalPhase;
@property (readonly) NSString *bundleID;
@property (readonly) NSNumber *itemID;
@property (readonly) long long appType;
@property (readonly) long long source;
@property (readonly) long long installType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhase:(long long)a0 terminalPhase:(long long)a1 bundleID:(id)a2 itemID:(id)a3 appType:(long long)a4 installType:(long long)a5;

@end
