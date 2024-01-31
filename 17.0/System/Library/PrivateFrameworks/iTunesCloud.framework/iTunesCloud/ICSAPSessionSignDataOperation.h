@class NSData;

@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)executeWithSAPContext:(id)a0;
- (void).cxx_destruct;
- (void)finishWithSAPContextPreparationError:(id)a0;

@end
