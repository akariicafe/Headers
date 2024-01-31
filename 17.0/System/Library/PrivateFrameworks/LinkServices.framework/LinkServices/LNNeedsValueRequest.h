@class NSUUID, NSString, LNDialog;

@interface LNNeedsValueRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) LNDialog *dialog;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)respondWithError:(id)a0;
- (void)respondWithValue:(id)a0;
- (id)initWithIdentifier:(id)a0 parameterName:(id)a1 dialog:(id)a2;

@end
