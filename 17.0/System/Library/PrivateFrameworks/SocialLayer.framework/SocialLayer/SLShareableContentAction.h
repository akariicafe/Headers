@class NSString, BSAction;

@interface SLShareableContentAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) BSAction *action;

+ (id)actionWithBSAction:(id)a0;

- (id)initWithAction:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fail;
- (void)fulfillWithResponse:(id)a0;
- (id)initWithInfo:(id)a0 responseHandler:(id /* block */)a1;
- (id)initWithSceneIdentifier:(id)a0 responseHandler:(id /* block */)a1;

@end
