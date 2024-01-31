@class NSMutableData, NSObject;
@protocol DEReader;

@interface DERewindableReader : NSObject <DEReader>

@property (retain, nonatomic) NSObject<DEReader> *reader;
@property (nonatomic) BOOL rewound;
@property (retain, nonatomic) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;

- (void)close;
- (id)init;
- (void)dealloc;
- (id)readData;
- (id)readDataOfLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)rewind;
- (id)initWithReader:(id)a0;
- (void)disableRewind;
- (BOOL)isRewindable;

@end
