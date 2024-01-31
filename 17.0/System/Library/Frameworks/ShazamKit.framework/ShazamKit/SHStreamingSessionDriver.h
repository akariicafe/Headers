@class NSUUID, SHSignatureMetrics, NSString, NSDate, SHSignatureBuffer;
@protocol SHSessionDriverDelegate;

@interface SHStreamingSessionDriver : NSObject <SHSessionDriver>

@property (retain, nonatomic) NSDate *intermissionDeadline;
@property (nonatomic) double currentRequiredDuration;
@property (retain, nonatomic) SHSignatureBuffer *signatureBuffer;
@property (readonly, nonatomic) SHSignatureMetrics *metrics;
@property (retain, nonatomic) NSUUID *matchingSignatureID;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (weak, nonatomic) id<SHSessionDriverDelegate> sessionDriverDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canPerformMatch;
- (void)flow:(id)a0 time:(id)a1;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1 bufferDuration:(double)a2;
- (id)initWithSignatureBuffer:(id)a0;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (void)receivedSignature:(id)a0 retry:(double)a1 intermission:(double)a2 dropCurrentSignature:(BOOL)a3;
- (id)signatureForMatching;

@end
