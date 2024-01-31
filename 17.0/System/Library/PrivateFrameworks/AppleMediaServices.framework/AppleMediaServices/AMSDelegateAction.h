@class NSString, NSDictionary;

@interface AMSDelegateAction : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *parameters;

- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)actionPayload;
- (id)initWithDialogAction:(id)a0;

@end
