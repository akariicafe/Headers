@class NSData;

@interface _DPPiRapporEncoderResult : NSObject

@property (readonly, nonatomic) NSData *phi0;
@property (readonly, nonatomic) NSData *otherPhi;
@property (readonly, nonatomic) unsigned long long numberOfOtherPhi;
@property (readonly, nonatomic) unsigned long long numberOfEncodedIndices;

+ (id)encoderResultWithPhi0:(id)a0 otherPhi:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhi0:(id)a0 otherPhi:(id)a1;

@end
