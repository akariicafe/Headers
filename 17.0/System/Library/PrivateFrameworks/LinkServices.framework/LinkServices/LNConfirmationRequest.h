@class LNDialog, NSUUID, NSString, LNValue, LNViewSnippet;

@interface LNConfirmationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, copy, nonatomic) LNDialog *dialog;
@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)respondWithError:(id)a0;
- (id)initWithIdentifier:(id)a0 parameterName:(id)a1 value:(id)a2 dialog:(id)a3 viewSnippet:(id)a4;
- (void)respondWithConfirmation:(BOOL)a0;

@end
