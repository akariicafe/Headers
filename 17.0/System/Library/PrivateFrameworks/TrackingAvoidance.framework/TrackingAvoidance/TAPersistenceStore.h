@class TADeviceRecord, TAVisitState;

@interface TAPersistenceStore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TADeviceRecord *deviceRecord;
@property (retain, nonatomic) TAVisitState *visitState;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
