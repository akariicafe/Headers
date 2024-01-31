@class NSString;

@interface PKStrokeProviderSliceIdentifierCoherence : PKStrokeProviderSliceIdentifier {
    void /* unknown type, empty encoding */ inkTimestamp;
    void /* unknown type, empty encoding */ transformTimestamp;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 tStart:(double)a1 tEnd:(double)a2;

@end
