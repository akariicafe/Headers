@interface NSEncodingDetector : NSObject {
    void /* function */ *_recognizeFunc;
    unsigned long long _givenNumBytes;
    unsigned long long _numChars;
    unsigned long long _numMultiByteChars;
    unsigned long long _numSingleBytechars;
    unsigned long long _skipBytes;
    unsigned long long _numZeroBytes;
    unsigned long long _mostFrqChars;
    unsigned long long _numBigrams;
    unsigned long long _numRep;
    unsigned long long _numDirect;
    unsigned long long _numBase64;
    unsigned long long _numSeq;
    unsigned long long _numTrigram;
    unsigned long long _numLower;
    unsigned long long _numHigher;
    double _weight;
    BOOL _hasBase64;
    BOOL _isBigEndian;
    BOOL _hasBOM;
    unsigned int _tag;
}

@property (readonly) unsigned long long nsEncoding;
@property (readonly) unsigned int cfEncoding;

+ (id)detectorForCFStringEncoding:(unsigned int)a0 allowBackupDetectors:(BOOL)a1;
+ (void /* function */ *)recognizeFuncForCFStringEncoding:(unsigned int)a0;

- (double)confidence;
- (void)reset;
- (double)multiBytesRatio;
- (double)_ASCII_confidence;
- (double)_singleByte_confidence;
- (double)bytesRatio;
- (double)confidenceWith2Chars;
- (id)initWithNSStringEncoding:(unsigned long long)a0 CFStringEncoding:(unsigned int)a1 recognizeFunc:(void /* function */ *)a2;
- (unsigned long long)maxSkipBytes;
- (unsigned long long)recognizeString:(const char *)a0 withDataLength:(unsigned long long)a1 intoBuffer:(id)a2;
- (void)softReset;

@end
