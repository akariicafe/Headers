@class NSDictionary, NSDate;

@interface ASDClipRestrictionsTask : NSObject {
    NSDictionary *_dictionary;
    NSDate *_verificationDate;
}

@property (readonly) BOOL hasErrorStatus;
@property (readonly, nonatomic) long long responseCode;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasResponseFlag:(long long)a0;
- (id)initWithClipRequest:(id)a0;
- (id)initWithClipRequest:(id)a0 verificationDate:(id)a1;
- (id)initWithDictionary:(id)a0 verificationDate:(id)a1;

@end
