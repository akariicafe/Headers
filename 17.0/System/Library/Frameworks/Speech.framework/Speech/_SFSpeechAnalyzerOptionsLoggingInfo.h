@class NSUUID;

@interface _SFSpeechAnalyzerOptionsLoggingInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *asrID;
@property (readonly, copy, nonatomic) NSUUID *requestID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsrID:(id)a0 requestID:(id)a1;

@end
