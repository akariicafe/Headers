@class NSString;

@interface IREventDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) long long eventSubType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *contextIdentifier;

+ (id)eventDOWithAppleTVControlType:(long long)a0;
+ (id)eventDOWithEventType:(long long)a0 eventSubType:(long long)a1 name:(id)a2 bundleID:(id)a3 contextIdentifier:(id)a4;
+ (id)eventDOWithMediaType:(long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementEventType:(long long)a0;
- (id)description;
- (id)copyWithReplacementName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventType:(long long)a0 eventSubType:(long long)a1 name:(id)a2 bundleID:(id)a3 contextIdentifier:(id)a4;
- (id)copyWithReplacementBundleID:(id)a0;
- (id)copyWithReplacementContextIdentifier:(id)a0;
- (id)copyWithReplacementEventSubType:(long long)a0;
- (id)exportAsDictionary;
- (BOOL)isEqualToEventDO:(id)a0;

@end
