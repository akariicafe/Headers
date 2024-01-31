@class NSData;

@interface VSHash : NSObject

@property (nonatomic, getter=isFinalized) BOOL finalized;
@property (nonatomic) struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } ctx;
@property (copy, nonatomic) NSData *finalData;

- (id)init;
- (void)dealloc;
- (void)updateWithData:(id)a0;
- (void).cxx_destruct;
- (void)updateWithString:(id)a0;
- (void)updateWithDate:(id)a0;
- (void)updateWithUUID:(id)a0;
- (void)updateWithInteger:(long long)a0;

@end
