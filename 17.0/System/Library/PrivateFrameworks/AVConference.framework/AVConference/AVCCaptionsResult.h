@class NSString, NSMutableArray, NSArray;

@interface AVCCaptionsResult : NSObject <VCCaptionsTranscription>

@property (readonly, nonatomic) BOOL utteranceComplete;
@property (readonly, nonatomic) NSMutableArray *tokens;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned int utteranceNumber;
@property (readonly, nonatomic) unsigned int updateNumber;
@property (readonly, nonatomic) NSArray *segments;

- (void)dealloc;
- (id)description;
- (BOOL)addTokenWithString:(id)a0 confidence:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithCapacity:(long long)a0 utteranceComplete:(BOOL)a1 utteranceNumber:(unsigned int)a2 updateNumber:(unsigned int)a3;

@end
