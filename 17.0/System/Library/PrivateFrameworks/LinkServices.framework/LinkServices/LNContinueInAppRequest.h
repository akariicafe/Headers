@class NSUUID, LNDialog;

@interface LNContinueInAppRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) LNDialog *dialog;
@property (readonly, nonatomic, getter=isThrowing) BOOL throwing;
@property (readonly, nonatomic) BOOL requestConfirmation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)respondWithError:(id)a0;
- (void)respondWithSuccess;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 throwing:(BOOL)a2 requestConfirmation:(BOOL)a3;

@end
