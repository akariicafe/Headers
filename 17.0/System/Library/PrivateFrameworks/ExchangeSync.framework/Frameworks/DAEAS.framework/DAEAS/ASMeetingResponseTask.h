@class NSArray;

@interface ASMeetingResponseTask : ASTask

@property (retain, nonatomic) NSArray *responseItems;

- (id)requestBody;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)processContext:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (id)initWithResponseItems:(id)a0;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
