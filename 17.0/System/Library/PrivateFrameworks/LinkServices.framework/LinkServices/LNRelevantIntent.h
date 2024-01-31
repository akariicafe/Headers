@class NSString, LNRelevantContext, LNAction;

@interface LNRelevantIntent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) NSString *widgetKind;
@property (readonly, copy, nonatomic) LNRelevantContext *context;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIdentifier:(id)a0 action:(id)a1 widgetKind:(id)a2 context:(id)a3;

@end
