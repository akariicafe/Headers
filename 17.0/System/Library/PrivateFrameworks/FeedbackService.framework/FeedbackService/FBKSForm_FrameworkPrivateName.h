@class NSData, NSString;

@interface FBKSForm_FrameworkPrivateName : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ answers;
}

@property (nonatomic, readonly) NSData *asJSON;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) void /* unknown type, empty encoding */ authenticationMethod;

+ (id)fromJSONWithData:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)asFBAURLSchemeWithIsSurvey:(BOOL)a0;
- (void)prefillWithQuestion:(id)a0 answer:(id)a1;
- (void)setQuestionsWithNsMutableDict:(id)a0;

@end
