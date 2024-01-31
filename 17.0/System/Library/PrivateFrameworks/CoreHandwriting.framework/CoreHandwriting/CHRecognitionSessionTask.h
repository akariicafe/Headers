@class CHStrokeClassificationModel, NSArray, CHRecognitionSessionResult, NSSet, NSObject;
@protocol OS_dispatch_queue, CHRecognitionSessionTaskDelegate, CHStrokeProvider;

@interface CHRecognitionSessionTask : NSObject {
    BOOL _cancelled;
    long long _status;
    CHRecognitionSessionResult *_outputResult;
    NSObject<OS_dispatch_queue> *__recognizersQueue;
    CHStrokeClassificationModel *_strokeClassificationModel;
    NSArray *_subjectStrokeIdentifiers;
    id /* block */ _partialResultBlock;
}

@property (readonly, nonatomic) CHRecognitionSessionResult *inputResult;
@property (readonly, nonatomic) long long status;
@property (readonly) BOOL cancelled;
@property (nonatomic) id<CHRecognitionSessionTaskDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *recognitionLocales;
@property (readonly, copy, nonatomic) NSArray *preferredLocales;
@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, nonatomic) CHRecognitionSessionResult *outputResult;
@property (readonly, nonatomic) long long recognitionEnvironment;
@property (readonly, nonatomic) long long strokeGroupingRequirement;
@property (readonly, nonatomic) BOOL isHighResponsivenessTask;
@property (nonatomic) BOOL saveInputDrawings;
@property (copy, nonatomic) NSSet *forceRecognitionStrokeGroupIdentifiers;
@property (nonatomic) BOOL strokeGroupingOnly;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)clutterFilter;
- (id)initWithLocales:(id)a0 preferredLocales:(id)a1 strokeProvider:(id)a2 inputResult:(id)a3 recognitionQOSClass:(unsigned int)a4 recognitionEnvironment:(long long)a5;
- (id)initWithLocales:(id)a0 preferredLocales:(id)a1 strokeProvider:(id)a2 inputResult:(id)a3 recognitionQOSClass:(unsigned int)a4 recognitionEnvironment:(long long)a5 isHighResponsivenessTask:(BOOL)a6 strokeClassificationModel:(id)a7 strokeGroupingRequirement:(long long)a8 partialResultBlock:(id /* block */)a9;
- (id)initWithLocales:(id)a0 preferredLocales:(id)a1 strokeProvider:(id)a2 inputResult:(id)a3 recognitionQOSClass:(unsigned int)a4 recognitionEnvironment:(long long)a5 isHighResponsivenessTask:(BOOL)a6 strokeClassificationModel:(id)a7 strokeGroupingRequirement:(long long)a8 subjectStrokeIdentifiers:(id)a9 partialResultBlock:(id /* block */)a10;
- (id)newGroupingManager;
- (id)newStrokeClassifier;
- (id)recognitionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;
- (id)textCorrectionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;

@end
