@interface SAWSUpdateTimeToIndexMapping : NSObject

@property (readonly) unsigned long long frameStartSampleIndex;
@property (readonly) unsigned long long numFrameIndices;
@property (readonly) unsigned long long frameEndSampleIndex;
@property (readonly) unsigned long long waitStartSampleIndex;
@property (readonly) unsigned long long numWaitIndices;
@property (readonly) unsigned long long waitEndSampleIndex;
@property (readonly) unsigned long long deferStartSampleIndex;
@property (readonly) unsigned long long numDeferIndices;
@property (readonly) unsigned long long deferEndSampleIndex;
@property (readonly) unsigned long long workStartSampleIndex;
@property (readonly) unsigned long long numWorkIndices;
@property (readonly) unsigned long long workEndSampleIndex;

+ (id)arrayOfMappingsFromWSUpdataDataArray:(id)a0 andSampleDataStore:(id)a1;

- (id)initWithWSUpdateData:(id)a0 andSampleDataStore:(id)a1 andHintIndex:(unsigned long long)a2;
- (void)printDeferIndexRangeToStream:(id)a0 withTranslationDelta:(long long)a1;
- (void)printFrameIndexRangeToStream:(id)a0 withTranslationDelta:(long long)a1;
- (void)printWaitIndexRangeToStream:(id)a0 withTranslationDelta:(long long)a1;
- (void)printWorkIndexRangeToStream:(id)a0 withTranslationDelta:(long long)a1;

@end
