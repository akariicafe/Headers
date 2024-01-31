@class NSMutableData, NLNumberGenerator, NLDataProvider;

@interface NLDataEnumerator : NSObject {
    NLDataProvider *_dataProvider;
    unsigned long long _idx;
    NLNumberGenerator *_generator;
    NSMutableData *_shuffleData;
}

@property (readonly, retain) NLDataProvider *dataProvider;
@property (readonly) unsigned long long index;

- (id)nextInstance;
- (void).cxx_destruct;
- (id)initWithDataProvider:(id)a0;
- (void)shuffle;
- (id)initWithDataProvider:(id)a0 numberGenerator:(id)a1;
- (id)instanceAtIndex:(unsigned long long)a0;
- (void)rewind;
- (void)rewindAndShuffle:(BOOL)a0;

@end
