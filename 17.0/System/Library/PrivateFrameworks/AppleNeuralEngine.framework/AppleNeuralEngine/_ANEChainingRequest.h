@class NSArray, NSNumber;

@interface _ANEChainingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *inputBuffer;
@property (readonly, nonatomic) NSArray *outputSets;
@property (readonly, nonatomic) NSArray *loopbackInputSymbolIndex;
@property (readonly, nonatomic) NSArray *loopbackOutputSymbolIndex;
@property (readonly, nonatomic) NSArray *signalEvents;
@property (readonly, nonatomic) NSNumber *transactionHandle;
@property (readonly, nonatomic) NSNumber *procedureIndex;
@property (readonly, nonatomic) NSNumber *fwEnqueueDelay;
@property (readonly, nonatomic) NSNumber *memoryPoolId;

+ (id)chainingRequestWithInputs:(id)a0 outputSets:(id)a1 lbInputSymbolId:(id)a2 lbOutputSymbolId:(id)a3 procedureIndex:(id)a4 signalEvents:(id)a5 transactionHandle:(id)a6 fwEnqueueDelay:(id)a7 memoryPoolId:(id)a8;

- (BOOL)validate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInputs:(id)a0 outputs:(id)a1 lbInputSymbolId:(id)a2 lbOutputSymbolId:(id)a3 procedureIndex:(id)a4 signalEvents:(id)a5 transactionHandle:(id)a6 fwEnqueueDelay:(id)a7 memoryPoolId:(id)a8;

@end
