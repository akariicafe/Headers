@class NSData, NSArray, NSString;

@interface FBKSFeedbackCount_FrameworkPrivateName : NSObject {
    void /* unknown type, empty encoding */ feedbackFiled;
    void /* unknown type, empty encoding */ errors;
}

@property (nonatomic, readonly) NSData *asJSON;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ currentCampaign;
@property (nonatomic, readonly) NSArray *feedbackFiled;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ declineCount;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

+ (void)fetchCountsForFormWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)fromJSONWithData:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
