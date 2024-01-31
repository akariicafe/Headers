@class LNDialog, NSUUID, LNValue, LNConfirmationActionName, LNViewSnippet, LNAction;

@interface LNActionOutput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) LNAction *showOutputAction;
@property (readonly, nonatomic) long long showOutputActionHint;
@property (readonly, nonatomic) LNDialog *dialog;
@property (readonly, nonatomic) LNViewSnippet *viewSnippet;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic, getter=isDeferred) BOOL deferred;
@property (readonly, nonatomic) LNAction *nextAction;
@property (readonly, nonatomic) LNConfirmationActionName *confirmationActionName;
@property (readonly, nonatomic, getter=shouldShowPrompt) BOOL showPrompt;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 value:(id)a3 showOutputAction:(id)a4 deferred:(BOOL)a5 nextAction:(id)a6 confirmationActionName:(id)a7;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 value:(id)a3 showOutputAction:(id)a4 deferred:(BOOL)a5 nextAction:(id)a6 confirmationActionName:(id)a7 showPrompt:(BOOL)a8;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 value:(id)a3 showOutputAction:(id)a4 showOutputActionHint:(long long)a5 deferred:(BOOL)a6 nextAction:(id)a7 confirmationActionName:(id)a8 showPrompt:(BOOL)a9;

@end
