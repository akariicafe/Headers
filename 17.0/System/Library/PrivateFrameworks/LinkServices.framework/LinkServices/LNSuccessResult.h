@class NSArray, NSData, LNActionOutput, LNActionAppContext, LNAction;

@interface LNSuccessResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *actionData;
@property (readonly, copy, nonatomic) NSData *outputData;
@property (readonly, copy, nonatomic) NSData *appContextData;
@property (readonly, copy, nonatomic) NSData *predictionsData;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) LNActionOutput *output;
@property (readonly, copy, nonatomic) LNActionAppContext *actionAppContext;
@property (readonly, copy, nonatomic) NSArray *predictions;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)verboseDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAction:(id)a0 output:(id)a1 actionAppContext:(id)a2 predictions:(id)a3;
- (id)initWithActionData:(id)a0 outputData:(id)a1 appContextData:(id)a2 predictionsData:(id)a3;

@end
