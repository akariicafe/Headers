@class NSString, NSDictionary, _LTLocalePair;

@interface _LTSafariLatencyLoggingRequest : NSObject <_LTLoggingRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double firstResponse;
@property (readonly, nonatomic) double firstParagraphComplete;
@property (readonly, nonatomic) double progressComplete;
@property (readonly, nonatomic) double pageComplete;
@property (copy, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSDictionary *dict;
@property (copy, nonatomic) _LTLocalePair *localePair;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)markFirstParagraphComplete;
- (void)encodeWithCoder:(id)a0;
- (void)markPageComplete;
- (void).cxx_destruct;
- (void)markProgressDone;
- (id)initWithCoder:(id)a0;
- (void)markResponse;

@end
