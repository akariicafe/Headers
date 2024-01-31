@class NSArray, NSDictionary, DASettingsRequestParams;

@interface ASSettingsTask : ASTask

@property (nonatomic) int key;
@property (nonatomic) long long status;
@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSArray *getters;
@property (retain, nonatomic) NSDictionary *setters;
@property (retain, nonatomic) DASettingsRequestParams *requestParams;

- (id)requestBody;
- (id)init;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)processContext:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
