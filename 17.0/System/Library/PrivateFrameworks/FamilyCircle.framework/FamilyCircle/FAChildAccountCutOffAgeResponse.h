@class NSString;

@interface FAChildAccountCutOffAgeResponse : AAResponse

@property (nonatomic, readonly) NSString *childCutOffAgeLocalized;
@property (nonatomic, readonly) long long childCutOffAge;

- (id)init;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1 bodyIsPlist:(BOOL)a2;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1 mediaType:(id)a2;

@end
