@class NSString;

@interface PFBugReport : NSObject {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ system;
    void /* unknown type, empty encoding */ errorKind;
}

@property (nonatomic, readonly) NSString *domainString;
@property (nonatomic, readonly) NSString *systemString;
@property (nonatomic, readonly) NSString *errorKindString;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ forceSubmissionAttempt;
@property (nonatomic, readonly) NSString *signature;

- (id)init;

@end
