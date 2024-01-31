@class NSUUID, _SWActionResponse, BSAction;
@protocol _SWActionResponseHandler;

@interface SWAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL hasSentResponse;
@property (retain, nonatomic) _SWActionResponse *response;
@property (readonly, nonatomic) BSAction *destinationBSAction;
@property (weak, nonatomic) id<_SWActionResponseHandler> responseHandler;
@property (copy, nonatomic) id /* block */ responseHandlerBlock;
@property (readonly, nonatomic) BSAction *sourceBSAction;

+ (id)actionWithDestinationAction:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fulfill;
- (void)_processResponse;
- (void)encodeWithBSActionSettings:(id)a0;
- (void)fail;
- (void)failWithResponse:(id)a0;
- (void)fulfillWithResponse:(id)a0;
- (id)initWithDestinationAction:(id)a0;

@end
