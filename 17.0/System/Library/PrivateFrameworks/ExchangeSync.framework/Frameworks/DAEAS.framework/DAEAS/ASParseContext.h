@class NSString, NSFileHandle, ASTrafficLogger, NSMutableArray;

@interface ASParseContext : NSObject

@property (nonatomic) long long curOffset;
@property (nonatomic) long long currentBytesReceivedCount;
@property (retain, nonatomic) NSMutableArray *dataBuffers;
@property (nonatomic) unsigned long long offsetIntoFirstData;
@property (nonatomic) unsigned int lastFoundBufferWithoutLineEnding;
@property (nonatomic) unsigned int numTokensInBuffersWithoutLineEndings;
@property (nonatomic) BOOL lastLookedAtBufferHadStringEndPrefix;
@property (retain, nonatomic) NSMutableArray *bypassedDataBuffers;
@property (retain, nonatomic) NSFileHandle *logFileHandle;
@property (retain, nonatomic) NSString *logFilePath;
@property (retain, nonatomic) ASTrafficLogger *trafficLogger;
@property (nonatomic) int streamingState;
@property (nonatomic) int codePage;
@property (retain, nonatomic) NSString *parseErrorReason;
@property (nonatomic) BOOL moreDataExpected;
@property (nonatomic) int dataGeneration;
@property (nonatomic) long long expectedTotalBytesCount;
@property (nonatomic) BOOL keepPreviousData;

- (id)init;
- (void)dealloc;
- (void)setShouldLog:(BOOL)a0;
- (void).cxx_destruct;
- (void)addData:(id)a0;
- (unsigned char)nextByte;
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)a0;
- (BOOL)advanceOffsetByAmount:(unsigned int)a0;
- (BOOL)advanceOffsetByAmount:(unsigned int)a0 retainLastToken:(BOOL)a1;
- (char *)bufferForLength:(unsigned int)a0 shouldFree:(BOOL *)a1;
- (id)bufferWithAllData;
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned int)a0;
- (unsigned char)currentByte;
- (void)flushLogs;
- (long long)goodSizeForBuffer;
- (BOOL)hasNumberOfTokensRemaining:(unsigned int)a0;
- (void)invalidateBuffers;
- (int)numTokensForNextOpaqueData;
- (int)numTokensForNextString;
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)a0;
- (int)numberOfBytesUntilStringEnd:(char *)a0 searchStringLength:(int)a1 acceptingBufferBits:(BOOL)a2;
- (void)resetToZeroOffset;

@end
