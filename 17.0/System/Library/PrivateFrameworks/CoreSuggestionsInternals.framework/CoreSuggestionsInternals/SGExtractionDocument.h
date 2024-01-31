@class NSArray, NSDictionary;

@interface SGExtractionDocument : NSObject

@property (retain, nonatomic) NSArray *enrichedTaggedCharacterRanges;
@property (retain, nonatomic) NSDictionary *modelOutput;
@property (retain, nonatomic) NSDictionary *indexSetForOutputNameLabel;

+ (id)allDayDateComponentsFromDate:(id)a0;
+ (id)candidatesForLabelTokenIndexes:(id)a0 inPlainText:(id)a1 forTaggedCharacterRanges:(id)a2;
+ (id)candidatesForLabelsWithPlainTextIndexSets:(id)a0 inPlainText:(id)a1;
+ (id)candidatesForPlainTextIndexSet:(id)a0 inPlainText:(id)a1;
+ (id)dateComponentsFromDataDetectorMatch:(id)a0 inferDates:(BOOL)a1 approximateTime:(BOOL)a2 partialDate:(BOOL)a3 useEndForDurations:(BOOL)a4;
+ (id)dateComponentsFromDate:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstRangeInIndexSet:(id)a0;
+ (id)indexSetForOutputNameLabelForModelOutput:(id)a0;
+ (id)keyForOutputName:(id)a0 label:(id)a1;
+ (id)labelTokenIndexesForOutputName:(id)a0 label:(id)a1 modelOutput:(id)a2;
+ (id)labelTokenIndexesForOutputName:(id)a0 label:(id)a1 modelOutput:(id)a2 maxMergeDistance:(unsigned long long)a3;
+ (id)mergeComponent:(unsigned long long)a0 usingBaseDateComponents:(id)a1 withDateComponents:(id)a2;
+ (id)mergeDetectedDateComponents:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeForIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTaggedCharacterRanges:(id)a1;

- (void).cxx_destruct;
- (id)candidatesForLabelTokenIndexes:(id)a0 inPlainText:(id)a1;
- (id)dataDetectorMatchesForTokenIndexes:(id)a0 dataDetectorMatches:(id)a1 allowDatesInPast:(BOOL)a2 allowTimeOffset:(BOOL)a3;
- (id)detectedDateComponentsForTokenIndexes:(id)a0 dataDetectorMatches:(id)a1 allowDatesInPast:(BOOL)a2 inferDates:(BOOL)a3 approximateTime:(BOOL)a4 partialDate:(BOOL)a5 allowTimeOffset:(BOOL)a6 useEndForDurations:(BOOL)a7;
- (id)detectedDateComponentsForTokenIndexes:(id)a0 dataDetectorMatches:(id)a1 allowDatesInPast:(BOOL)a2 inferDates:(BOOL)a3 approximateTime:(BOOL)a4 partialDate:(BOOL)a5 useEndForDurations:(BOOL)a6;
- (id)initWithEnrichedTaggedCharacterRanges:(id)a0 modelOutput:(id)a1;
- (id)labelTokenIndexesForOutputName:(id)a0 label:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRangeForTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
