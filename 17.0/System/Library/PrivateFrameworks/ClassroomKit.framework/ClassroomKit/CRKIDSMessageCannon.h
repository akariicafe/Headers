@class CRKIDSMessageFormatter;
@protocol CRKIDSPrimitives;

@interface CRKIDSMessageCannon : NSObject

@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, nonatomic) CRKIDSMessageFormatter *messageFormatter;

- (void).cxx_destruct;
- (id)initWithIDSPrimitives:(id)a0;
- (void)sendIDSMessage:(id)a0 destinationAddress:(id)a1 sourceAppleID:(id)a2 completion:(id /* block */)a3;
- (void)sendIDSMessage:(id)a0 destinationAddress:(id)a1 sourceAppleID:(id)a2 options:(id)a3 completion:(id /* block */)a4;

@end
