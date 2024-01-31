@class NSURL, NSArray, NSString;

@interface _SFSpeechRecognizerModelOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL farField;
@property (readonly, copy, nonatomic) NSURL *supplementalModelURL;
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL;
@property (readonly, copy, nonatomic) NSArray *speechProfileURLs;
@property (readonly, copy, nonatomic) NSString *taskForMemoryLock;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFarField:(BOOL)a0 supplementalModelURL:(id)a1 modelOverrideURL:(id)a2 speechProfileURLs:(id)a3 taskForMemoryLock:(id)a4;

@end
