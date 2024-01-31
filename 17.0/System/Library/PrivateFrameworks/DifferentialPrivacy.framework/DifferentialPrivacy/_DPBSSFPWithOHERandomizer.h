@class NSString, _DPBSFPWithOHE, _DPHuffmanEncoder;

@interface _DPBSSFPWithOHERandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) _DPBSFPWithOHE *bssfpWOHE;
@property (readonly, nonatomic) _DPHuffmanEncoder *huffmanEncoder;
@property (readonly, nonatomic) BOOL hasHuffmanTable;
@property (readonly, nonatomic) BOOL isLocalizable;
@property (readonly, nonatomic) NSString *huffmanTableClassNamePattern;
@property (readonly, nonatomic) unsigned long long maxRecordBitLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extractLocaleFromKey:(id)a0;
+ (id)extractSortedTokensFromWordsArray:(id)a0;
+ (id)randomizerWithEpsilon:(double)a0 maxRecordBitLength:(unsigned long long)a1 segmentBitLength:(unsigned long long)a2 probabilityOfVerification:(double)a3 hashSeed:(unsigned long long)a4 hashSeedInVerification:(unsigned long long)a5 signatureBitLength:(unsigned long long)a6 signatureBitLengthInVerification:(unsigned long long)a7 huffmanTableClassName:(id)a8;

- (id)init;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)bitStringFromEncodedTokens:(id)a0;
- (id)initWithEpsilon:(double)a0 maxRecordBitLength:(unsigned long long)a1 segmentBitLength:(unsigned long long)a2 probabilityOfVerification:(double)a3 hashSeed:(unsigned long long)a4 hashSeedInVerification:(unsigned long long)a5 signatureBitLength:(unsigned long long)a6 signatureBitLengthInVerification:(unsigned long long)a7 huffmanTableClassName:(id)a8;
- (void)instantiateLocalizedHuffmanTable:(id)a0;
- (id)randomize:(id)a0 forKey:(id)a1;
- (id)randomizeBitString:(id)a0 huffmanVersion:(id)a1 forKey:(id)a2;
- (id)randomizeEncodedTokens:(id)a0 huffmanVersion:(id)a1 forKey:(id)a2;
- (id)randomizeNumbers:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeNumbersVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;

@end
