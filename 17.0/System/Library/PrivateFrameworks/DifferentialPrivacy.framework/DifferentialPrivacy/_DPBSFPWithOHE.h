@interface _DPBSFPWithOHE : NSObject {
    double _epsilon;
    unsigned long long _maxRecordBitLength;
    unsigned long long _segmentBitLength;
    unsigned long long _numOfSegments;
    double _probabilityOfVerification;
    unsigned long long _hashSeed;
    unsigned long long _hashSeedInVerification;
    unsigned long long _signatureBitLength;
    unsigned long long _signatureBitLengthInVerification;
}

- (id)init;
- (id)encode:(id)a0 isVerificationMode:(BOOL)a1 segmentIndex:(unsigned long long)a2;
- (id)initWithEpsilon:(double)a0 maxRecordBitLength:(unsigned long long)a1 segmentBitLength:(unsigned long long)a2 probabilityOfVerification:(double)a3 hashSeed:(unsigned long long)a4 hashSeedInVerification:(unsigned long long)a5 signatureBitLength:(unsigned long long)a6 signatureBitLengthInVerification:(unsigned long long)a7;
- (id)privatize:(id)a0;
- (id)privatizeWithOHE:(id)a0 isVerificationMode:(BOOL)a1;

@end
