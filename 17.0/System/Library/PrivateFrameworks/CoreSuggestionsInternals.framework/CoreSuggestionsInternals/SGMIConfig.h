@class NSDictionary, NSRegularExpression, _PASLazyPurgeableResult;

@interface SGMIConfig : NSObject {
    _PASLazyPurgeableResult *_lazyDetectors;
}

@property (readonly, nonatomic) NSDictionary *detectors;
@property (readonly, nonatomic) NSRegularExpression *attachmentLinkDetectionRegex;
@property (readonly, nonatomic) float bodyAnalysisSamplingFactor;
@property (readonly, nonatomic) NSDictionary *followUpWarningsParameters;
@property (readonly, nonatomic) double defaultTimeIntervalToStartWarningExposition;
@property (readonly, nonatomic) double defaultTimeIntervalForAWarning;
@property (readonly, nonatomic) double defaultTimeIntervalToEndWarningExposition;

+ (id)defaultConfig;
+ (id)_defaultConfig;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithAssetAttachmentDictionary:(id)a0 attachmentLinkDetection:(id)a1 recipientConservativeDictionary:(id)a2 recipientDictionary:(id)a3 nicknameDictionary:(id)a4 followUpOnOutgoingMailsQuestionsDictionary:(id)a5 followUpOnOutgoingMailsAsksDictionary:(id)a6 followUpOnIncomingMailsDictionary:(id)a7 bodyAnalysisSamplingFactor:(float)a8 defaultTimeIntervalToStartWarningExposition:(double)a9 defaultTimeIntervalForAWarning:(double)a10 defaultTimeIntervalToEndWarningExposition:(double)a11 followUpWarningsParameters:(id)a12;
- (BOOL)shouldAnalyzeBody;

@end
