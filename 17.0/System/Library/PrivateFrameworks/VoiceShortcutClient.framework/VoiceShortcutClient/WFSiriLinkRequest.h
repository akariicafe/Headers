@class NSString, LNAction;

@interface WFSiriLinkRequest : WFSiriActionRequest

@property (readonly, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *nameOverride;
@property (readonly, nonatomic) BOOL showWhenRun;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0 bundleIdentifier:(id)a1 nameOverride:(id)a2 showWhenRun:(BOOL)a3;

@end
