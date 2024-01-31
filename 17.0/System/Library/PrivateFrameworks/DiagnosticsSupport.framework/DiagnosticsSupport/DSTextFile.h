@class NSData, NSMutableArray, NSFileHandle;

@interface DSTextFile : NSObject <DSTextFileEnumeratorControl>

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned long long bufferSize;
@property (retain, nonatomic) NSMutableArray *linePositions;
@property (retain, nonatomic) NSData *lineBreak;
@property (nonatomic) BOOL cancelEnumeration;
@property (nonatomic) long long skipCount;
@property (nonatomic) BOOL isEnumerating;
@property (nonatomic) unsigned long long currentLineIndex;

+ (id)textFileWithPath:(id)a0;

- (id)init;
- (id)initWithFilePath:(id)a0;
- (void)end;
- (void)seekToOffset:(unsigned long long)a0;
- (unsigned long long)currentOffset;
- (id)readDataOfLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)enumerateUsingBlock:(id /* block */)a0;
- (void)seekToBeginning;
- (void)resetEnumerator;
- (BOOL)advanceToNextLine:(id *)a0;
- (id)extractLine:(unsigned long long)a0;
- (unsigned long long)getOffsetAtLineIndex:(unsigned long long)a0;
- (id)initWithFilePath:(id)a0 withBufferSize:(unsigned long long)a1;
- (BOOL)searchForNextLineFromCurrentPosition:(id *)a0;
- (void)skipWithLines:(long long)a0;

@end
