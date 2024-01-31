@interface SNUltronUtils : NSObject

+ (id)generateRecordingWavURLForDate:(id)a0 requestDescription:(id)a1 directoryURL:(id)a2;
+ (void)sendInputToUltronReporter:(id)a0 recentFramesOfAudioBuffer:(void *)a1 frameCount:(unsigned int)a2;
+ (id)addResult:(id)a0 toHistoryForRequest:(id)a1 histories:(id)a2 ultronHistoryDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 sysdiagnoseHistoryDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
+ (id)collectConfidencesFromResults:(id)a0;
+ (id)collectDetectedStatusFromResults:(id)a0;
+ (id)collectTimestampsFromResults:(id)a0;
+ (id)completeOptionalUltronReportForRequest:(id)a0 allReporters:(id)a1;
+ (void)completeUltronReportForReporter:(id)a0;
+ (void)completeUltronReportsForManyReporters:(id)a0;
+ (id)createUltronReportOperatorForRequest:(id)a0 recordingFormat:(id)a1 error:(id *)a2;
+ (id)emplaceUltronReportOperatorForRequest:(id)a0 recordingFormat:(id)a1 allReporters:(id)a2 error:(id *)a3;
+ (id)generateRecordingWavFilenameForDate:(id)a0 requestDescription:(id)a1;
+ (id)generateReportBasenameForDate:(id)a0 requestDescription:(id)a1;
+ (id)generateSummaryReportFilenameForDate:(id)a0 requestDescription:(id)a1;
+ (id)generateSummaryReportURLForDate:(id)a0 requestDescription:(id)a1 directoryURL:(id)a2;
+ (id)groupDetectionResultsByIdentifier:(id)a0;
+ (id)openRecordingWavForDate:(id)a0 requestDescription:(id)a1 format:(id)a2 directoryURL:(id)a3 error:(id *)a4;
+ (id)reanchorTimes:(id)a0;
+ (id)reanchorTimesRelativeToFirstOfTimeRangeWritables:(id)a0;
+ (BOOL)sendInputToOptionalUltronReporterForRequest:(id)a0 allReporters:(id)a1 audioBuffer:(id)a2;
+ (BOOL)sendInputToOptionalUltronReporterForRequest:(id)a0 allReporters:(id)a1 result:(id)a2;
+ (void)sendInputToUltronReporter:(id)a0 audioBuffer:(id)a1;
+ (BOOL)sendInputToUltronReporter:(id)a0 audioHistory:(void *)a1 resultsHistory:(id)a2 maxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 error:(id *)a4;
+ (BOOL)sendInputToUltronReporter:(id)a0 recentFramesOfAudioBuffer:(void *)a1 startingFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id *)a3;
+ (void)sendInputToUltronReporter:(id)a0 result:(id)a1;
+ (void)sendInputToUltronReporter:(id)a0 results:(id)a1;
+ (void)sendInputToUltronReporters:(id)a0 audioBuffer:(id)a1;
+ (id)startOrContinueUltronReportForRequest:(id)a0 existingReporter:(id)a1 recordingFormat:(id)a2 newResult:(id)a3 resultsHistory:(id)a4 audioHistory:(void *)a5 historyRecordDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 error:(id *)a7;
+ (id)subtractTimeOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromTimeRangeWritable:(id)a1;
+ (id)subtractTimeOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromTimeRangeWritables:(id)a1;
+ (id)summaryReportConfidenceValuesForResults:(id)a0;
+ (id)summaryReportForDate:(id)a0 requestDescription:(id)a1 detectionResults:(id)a2 buildVersion:(id)a3 processedFrameCount:(long long)a4;
+ (id)summaryReportGroupedConfidenceValuesForResults:(id)a0;
+ (id)updateUltronReportForRequest:(id)a0 existingReporter:(id)a1 recordingFormat:(id)a2 shouldRecordNewResult:(BOOL)a3 newResult:(id)a4 resultsHistory:(id)a5 audioHistory:(void *)a6 historyRecordDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 error:(id *)a8;
+ (id)updateUltronReportForRequest:(id)a0 recordingFormat:(id)a1 allReporters:(id)a2 shouldRecordNewResult:(BOOL)a3 newResult:(id)a4 resultsHistories:(id)a5 audioHistory:(void *)a6 historyRecordDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 error:(id *)a8;
+ (id)writeSummaryReportAsJSONToDirectoryURL:(id)a0 jsonWritingOptions:(unsigned long long)a1 createIntermediateDirectories:(BOOL)a2 overwrite:(BOOL)a3 date:(id)a4 requestDescription:(id)a5 detectionResults:(id)a6 buildVersion:(id)a7 processedFrameCount:(long long)a8 error:(id *)a9;
+ (id)writeSummaryReportAsJSONToURL:(id)a0 jsonWritingOptions:(unsigned long long)a1 createIntermediateDirectories:(BOOL)a2 overwrite:(BOOL)a3 date:(id)a4 requestDescription:(id)a5 detectionResults:(id)a6 buildVersion:(id)a7 processedFrameCount:(long long)a8 error:(id *)a9;

@end
