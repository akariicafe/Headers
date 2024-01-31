@class NSArray, NSMutableArray;

@interface PKAccountScheduledTransferList : NSObject <NSSecureCoding> {
    NSMutableArray *_scheduledTransfers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *scheduledTransfers;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addScheduledTransfer:(id)a0;
- (id)initWithScheduledTransfer:(id)a0;
- (id)jsonArrayRepresentation;
- (id)scheduledTransferOfFundingSourceType:(long long)a0;

@end
